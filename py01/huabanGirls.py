import re
import os
import requests
import time

PhotoNum = 0
PWD = "E:/huaban"
head = {
    'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/120.0.0.0 Safari/537.36',
    'Referer': 'https://huaban.com/'
}
TimeOut = 30

url = "http://huaban.com/favorite/beauty/"
url_image = "http://hbimg.b0.upaiyun.com/"
urlNext = "http://huaban.com/favorite/beauty/?iqkxaeyv&limit=20&wfl=1&max="


def downfile(file, url):
    print(f"下载: {file}")
    try:
        r = requests.get(url, headers=head, stream=True, timeout=TimeOut)
        with open(file, 'wb') as fd:
            for chunk in r.iter_content(chunk_size=8192):
                fd.write(chunk)
        print(f"下载完成: {file}")
    except Exception as e:
        print(f"下载失败: {e}")


def requestpageText(url):
    try:
        response = requests.get(url, headers=head, timeout=TimeOut)
        response.encoding = 'utf-8'
        return response.text
    except Exception as e:
        print(f"请求失败: {e}")
        time.sleep(5)
        return None


def requestUrl(url):
    global PhotoNum
    print(f"\n正在处理: {url}")
    text = requestpageText(url)

    if not text:
        print("请求失败或返回空数据")
        return

    pattern = re.compile(r'"pin_id":(\d+).*?"key":"(.*?)".*?"like_count":(\d+).*?"repin_count":(\d+)', re.S)
    items = re.findall(pattern, text)
    print(f"匹配到 {len(items)} 条数据")  # 调试用

    if not items:
        print("没有匹配到图片数据，可能网页结构已变化")
        return

    for item in items:
        pin_id, key, like_count, repin_count = item
        save_path = os.path.join(PWD, f"{pin_id}.jpg")

        if not os.path.exists(save_path):
            img_url = f"{url_image}{key}"
            downfile(save_path, img_url)
            PhotoNum += 1
            time.sleep(1)  # 避免请求过快

    if PhotoNum >= 100:  # 限制最多下载100张
        print("已达到最大下载数量")
        return

    max_pin_id = items[0][0]  # 使用第一条数据的 pin_id 翻页
    requestUrl(urlNext + str(max_pin_id))


if __name__ == "__main__":
    if not os.path.exists(PWD):
        os.makedirs(PWD)
    requestUrl(url)