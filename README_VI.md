# 🐍 Trò chơi Rắn Săn Mồi - Phiên bản Console C++

Một trò chơi Rắn săn mồi kinh điển được viết bằng C++ với cấu trúc module.

<!-- Centered avatar -->
<pre align="center">
     ____              _       
  / ___| _ __   __ _| | _____
  \___ \| '_ \ / _` | |/ / _ \
   ___) | | | | (_| |   <  __/
  |____/|_| |_|\__,_|_|\_\___|
         S N A K E   ++
</pre>

<p align="center">
  <a href="https://www.linkedin.com/in/YOUR_LINKEDIN_ID/" target="_blank">
    <img alt="LinkedIn" src="https://img.shields.io/badge/LinkedIn-brightgreen?style=flat&logo=linkedin&logoColor=white" />
  </a>
  <a href="https://discord.gg/YOUR_INVITE" target="_blank">
    <img alt="discord" src="https://img.shields.io/badge/discord-5865F2?style=flat&logo=discord&logoColor=white" />
  </a>
  <a href="https://YOUR_CHAT_URL" target="_blank">
    <img alt="chat" src="https://img.shields.io/badge/chat-brightgreen?style=flat&logo=wechat&logoColor=white" />
  </a>
  <a href="https://github.com/NgoThiVanGiang/2008299410_Snake_game/wiki" target="_blank">
    <img alt="Documentation" src="https://img.shields.io/badge/%F0%9F%93%9A%20Documentation-555555?style=flat" />
  </a>
</p>

## 📖 Giới Thiệu
🐍 Trò chơi Rắn Săn Mồi (C++ Console Edition) 🐍

Chào mừng bạn đến với phiên bản Rắn săn mồi kinh điển được viết lại bằng C++, với thiết kế module gọn gàng, giao diện console đầy màu sắc và các chế độ tùy chỉnh phù hợp cho nhiều cấp độ người chơi.

Dự án này được thực hiện như một bài tập cuối kỳ trong môn Kỹ năng nghề nghiệp của Nhóm 7, nhằm tái hiện lại cảm giác hoài niệm của game arcade ngay trên màn hình console Windows. Trò chơi có các điểm nổi bật:

- Cơ chế rắn săn mồi chuẩn cổ điển, có tính điểm, lối chơi đơn giản nhưng hấp dẫn.
- Cấu trúc mã nguồn module rõ ràng, tách biệt phần xử lý (SnakeGame.cpp), khai báo (SnakeGame.h) và điểm bắt đầu (main.cpp).
- Giao diện trực quan, có màn hình chào mừng, màn chơi và màn hình Game Over bằng đồ họa ký tự.
- Ba cấp độ khó: Dễ, Trung bình, Khó – người chơi có thể chọn tốc độ và thử thách phù hợp.
- Điều khiển linh hoạt: hỗ trợ cả phím mũi tên (↑)(↓)(←)(→) và các phím [W][A][S][D]. Sau khi thua, người chơi có thể nhấn R để chơi lại hoặc Q để thoát.
- Cực kỳ tiện lợi: chỉ cần chạy SnakeGame.exe là chơi ngay, không cần cài đặt.

## 🎮 Cách Chơi

Ngay khi bắt đầu, bạn sẽ thấy:

- Màn hình chào mừng với tên trò chơi và hướng dẫn ngắn gọn.
- Con rắn di chuyển liên tục. Nhiệm vụ của bạn là điều khiển rắn ăn mồi để dài ra, đồng thời tránh va vào tường và chính cơ thể mình. Nếu chạm chướng ngại, trò chơi kết thúc.
- Điều khiển hướng đi của đầu rắn bằng phím mũi tên (↑)(↓)(←)(→) hoặc các phím [W][A][S][D].
- Khi thua, bạn có thể:
Nhấn [R] để chơi lại.
Nhấn [Q] để thoát game.
- Số mồi mà rắn ăn được sẽ là số điểm của của người chơ.
## 📝 Mẹo & Chiến Thuật

- Bắt đầu chậm rãi: Nếu bạn mới chơi, hãy chọn chế độ Dễ để làm quen với cách rẽ và va chạm.
- Chọn cách điều khiển thoải mái: Một số người thích  (↑)(↓)(←)(→) , một số khác lại quen với các phím [W][A][S][D] – hãy chọn phù hợp với thói quen của bạn.
- Di chuyển có tính toán: Lập kế hoạch sớm và chú ý không gian xung quanh. Khi rắn dài ra, việc né tránh trở nên khó khăn hơn.
- Chơi lại và cải thiện: Mỗi lần chơi lại giúp bạn rút kinh nghiệm, từ đó kéo dài thời gian sống sót và đạt điểm cao hơn.
- Tăng dần độ khó: Khi đã quen, hãy thử Trung bình hoặc Khó để tăng tốc độ và thử thách.

## 🖼️ Ảnh minh họa

### 🟢 Màn hình Chào mừng
![App Screenshot](assets/screenshots/welcome-screen.png)

### 🎮 Màn hình Chơi
![App Screenshot](assets/screenshots/gameplay.png)

### 💀 Màn hình Kết thúc
![App Screenshot](assets/screenshots/game-over.png)

## ✨ Tính Năng

- 🐍 Lối chơi Rắn săn mồi cổ điển có tính điểm
- ⚙️ Ba cấp độ khó (Dễ, Trung bình, Khó)
- 📦 Cấu trúc mã nguồn module giúp dễ bảo trì
- 🎨 Giao diện console nhiều màu sắc

## 🎮 Điều Khiển

- ⬆️ / ⬇️ / ⬅️ / ➡️  → Di chuyển rắn (phím mũi tên)  
- **W / A / S / D** → Phím di chuyển thay thế  
- **R** → Bắt đầu lại sau khi thua  
- **Q** → Thoát trò chơi sau khi thua  

## 🧱 Cấu Trúc Mã Nguồn

- `main.cpp`: Điểm bắt đầu của ứng dụng
- `SnakeGame.h`: File header chứa khai báo lớp
- `SnakeGame.cpp`: File cài đặt với toàn bộ logic trò chơi
- `Makefile`: Dùng để build dự án với make
- `build_and_run.bat`: File batch trên Windows để biên dịch và chạy dễ dàng

## 💻 Yêu Cầu Hệ Thống

- 🪟 Hệ điều hành Windows (do sử dụng hàm console đặc thù Windows)
- 🧰 Trình biên dịch C++ (khuyên dùng g++)
