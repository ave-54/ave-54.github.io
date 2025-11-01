        const sitePages = [
            {
                id: 'index',
                fileName: 'index.html',
                title: 'Главная страница',
                // ВСТАВЬТЕ ТОЛЬКО СОДЕРЖИМОЕ ВНУТРИ BODY - БЕЗ <html>, <head>, <body>
                content: `
  <div class="navb" id="navb">
    <div class="row">
      <div class="col-1">
    <a href="/"><img class="ml" id="ml" src="l.png" width="90px"
        style="position: relative;top:-10px"></a>
      </div>
      <div class="col-7" id="si">
        <div id="search-interface1">
                <div class="search-box1">
                  <input type="text" id="search-input1" placeholder="Поиск 🔍">
                  <button id="search-button1" style="display: none;">Найти</button>
                </div>

                <div id="search-results1">
                  <div id="results-container1"></div>
                </div>
              </div>
      </div>
      <div class="col-2">
    <a onclick="openMenu()"><svg xmlns="http://www.w3.org/2000/svg" width="35" height="35" fill="currentColor" class="bi bi-columns-gap" viewBox="0 0 16 16">
  <path d="M6 1v3H1V1zM1 0a1 1 0 0 0-1 1v3a1 1 0 0 0 1 1h5a1 1 0 0 0 1-1V1a1 1 0 0 0-1-1zm14 12v3h-5v-3zm-5-1a1 1 0 0 0-1 1v3a1 1 0 0 0 1 1h5a1 1 0 0 0 1-1v-3a1 1 0 0 0-1-1zM6 8v7H1V8zM1 7a1 1 0 0 0-1 1v7a1 1 0 0 0 1 1h5a1 1 0 0 0 1-1V8a1 1 0 0 0-1-1zm14-6v7h-5V1zm-5-1a1 1 0 0 0-1 1v7a1 1 0 0 0 1 1h5a1 1 0 0 0 1-1V1a1 1 0 0 0-1-1z"/>
</svg><p> Меню</p></a></div>
    <div class="col-1"><div class="ds">
      <label id="switch" class="switch">
        <input type="checkbox" onchange="toggleTheme()" id="slider">
        <span class="slider round"></span>
      </label>
    </div>
    </div>
    </div>
  </div>

  <section class="bsb-faq-3 py-3 py-md-5 py-xl-8">
    <div class="container">
      <div class="row justify-content-md-center">
        <div class="col-12 col-md-10 col-lg-8 col-xl-7 col-xxl-6">
          <br><br>
          <h2 class="mb-4 display-5 text-center">#АвеХаб</h2>
          <p class="text-secondary text-center lead fs-4">Этот сайт создан для студентов АВТФ (для начала - студентов потока АБ/АБс/Аи 2025 года)</p>
          <p class="mb-5 text-center">Будем рады, если предложите материалы для сайта. </p>
          <hr class="w-50 mx-auto mb-5 mb-xl-9 border-dark-subtle">
        </div>
      </div>
    </div>



        <div id="menu" class="menu">
      <div class="menu-content">

        <div class="container">
          <div class="row" style="margin-bottom: -1.5%;">
            <div class="col-md-10">
              <div class="time-widget">
                <div class="time" id="time"></div>
                <div class="date" id="date"></div>
                <div class="week" id="week"></div>
                <div class="date" id="datek"></div>
                <div class="week" id="weekk"></div>
              </div>
              <script>
                // Обновление каждую секунду
                setInterval(updateWidget, 1000);
                // Первоначальный запуск
                updateWidget();
              </script>
            </div>
            <div class="row">
              <div class="col-1">
                <a href="/"><img class="ml" id="ml" src="l.png" width="140px" style="position: relative;top:-10px"></a>
              </div>
              <div class="col-11">
                <div id="search-interface">
                  <div class="search-box">
                    <input type="text" id="search-input" placeholder="Поиск 🔍">
                    <button id="search-button" style="display: none;">Найти</button>
                  </div>
                  <div id="search-results">
                    <div id="results-container"></div>
                  </div>
                </div>
              </div>
              <div class="col-1">
                <span class="close" onclick="closeMenu()">&times;</span>
              </div>
            </div>

          </div>
          <div class="row">
            <div class="col">
              <h3 align="center"><svg xmlns="http://www.w3.org/2000/svg" width="20" height="20" fill="currentColor"
                  class="bi bi-house" viewBox="0 0 16 16">
                  <path
                    d="M8.707 1.5a1 1 0 0 0-1.414 0L.646 8.146a.5.5 0 0 0 .708.708L2 8.207V13.5A1.5 1.5 0 0 0 3.5 15h9a1.5 1.5 0 0 0 1.5-1.5V8.207l.646.647a.5.5 0 0 0 .708-.708L13 5.793V2.5a.5.5 0 0 0-.5-.5h-1a.5.5 0 0 0-.5.5v1.293zM13 7.207V13.5a.5.5 0 0 1-.5.5h-9a.5.5 0 0 1-.5-.5V7.207l5-5z" />
                </svg> Меню</h3>
              <ul class="men">
                <li><a href="/"><span>Главная</span></a></li>
                <li><a href="/lec.html"><span>Лекции</span></a></li>
                <li><a href="/pr.html"><span>Практики</span></a></li>
                <li><a href="/soft.html"><span>ПО</span></a></li>
                <li><a href="/pin.html"><span>Материалы</span></a></li>
                <li><a href="/books.html"><span>Учебники</span></a></li>
                <li><a href="/ave.apk"><span>APK</span></a></li>
              </ul>
              <h3 align="center"><svg xmlns="http://www.w3.org/2000/svg" width="20" height="20" fill="currentColor"
                  class="bi bi-compass" viewBox="0 0 16 16">
                  <path
                    d="M8 16.016a7.5 7.5 0 0 0 1.962-14.74A1 1 0 0 0 9 0H7a1 1 0 0 0-.962 1.276A7.5 7.5 0 0 0 8 16.016m6.5-7.5a6.5 6.5 0 1 1-13 0 6.5 6.5 0 0 1 13 0" />
                  <path d="m6.94 7.44 4.95-2.83-2.83 4.95-4.949 2.83 2.828-4.95z" />
                </svg> Конспекты</h3>
              <ul class="men">
                <li><a href="/lec.html#linal"><span>ЛинАл</span></a></li>
                <li><a href="/lec.html#olkk"><span>ОЛКК</span></a></li>
                <li><a href="/lec.html#istoria"><span>История</span></a></li>
                <li><a href="/lec.html#matan"><span>МатАнализ</span></a></li>
              </ul>
            </div>
            <div class="col">
              <h3 align="center"><svg xmlns="http://www.w3.org/2000/svg" width="20" height="20" fill="currentColor"
                  class="bi bi-people" viewBox="0 0 16 16">
                  <path
                    d="M15 14s1 0 1-1-1-4-5-4-5 3-5 4 1 1 1 1zm-7.978-1L7 12.996c.001-.264.167-1.03.76-1.72C8.312 10.629 9.282 10 11 10c1.717 0 2.687.63 3.24 1.276.593.69.758 1.457.76 1.72l-.008.002-.014.002zM11 7a2 2 0 1 0 0-4 2 2 0 0 0 0 4m3-2a3 3 0 1 1-6 0 3 3 0 0 1 6 0M6.936 9.28a6 6 0 0 0-1.23-.247A7 7 0 0 0 5 9c-4 0-5 3-5 4q0 1 1 1h4.216A2.24 2.24 0 0 1 5 13c0-1.01.377-2.042 1.09-2.904.243-.294.526-.569.846-.816M4.92 10A5.5 5.5 0 0 0 4 13H1c0-.26.164-1.03.76-1.724.545-.636 1.492-1.256 3.16-1.275ZM1.5 5.5a3 3 0 1 1 6 0 3 3 0 0 1-6 0m3-2a2 2 0 1 0 0 4 2 2 0 0 0 0-4" />
                </svg> Группы</h3>
              <ul class="men">
                <li><a href="#"><span>АБ-520</span></a></li>
                <li><a href="#"><span>АБ-521</span></a></li>
                <li><a href="#"><span>АБ-522</span></a></li>
                <li><a href="#"><span>АБ-523</span></a></li>
                <li><a href="#"><span>АБс-524</span></a></li>
                <li><a href="#"><span>АБс-525</span></a></li>
                <li><a href="#"><span>АБс-526</span></a></li>
                <li><a href="#"><span>АБс-527</span></a></li>
                <li><a href="#"><span>АИ-52</span></a></li>
              </ul>
            </div>
            <div class="col">
              <h3 align="center"><svg xmlns="http://www.w3.org/2000/svg" width="20" height="20" fill="currentColor"
                  class="bi bi-rocket-takeoff" viewBox="0 0 16 16">
                  <path
                    d="M9.752 6.193c.599.6 1.73.437 2.528-.362s.96-1.932.362-2.531c-.599-.6-1.73-.438-2.528.361-.798.8-.96 1.933-.362 2.532" />
                  <path
                    d="M15.811 3.312c-.363 1.534-1.334 3.626-3.64 6.218l-.24 2.408a2.56 2.56 0 0 1-.732 1.526L8.817 15.85a.51.51 0 0 1-.867-.434l.27-1.899c.04-.28-.013-.593-.131-.956a9 9 0 0 0-.249-.657l-.082-.202c-.815-.197-1.578-.662-2.191-1.277-.614-.615-1.079-1.379-1.275-2.195l-.203-.083a10 10 0 0 0-.655-.248c-.363-.119-.675-.172-.955-.132l-1.896.27A.51.51 0 0 1 .15 7.17l2.382-2.386c.41-.41.947-.67 1.524-.734h.006l2.4-.238C9.005 1.55 11.087.582 12.623.208c.89-.217 1.59-.232 2.08-.188.244.023.435.06.57.093q.1.026.16.045c.184.06.279.13.351.295l.029.073a3.5 3.5 0 0 1 .157.721c.055.485.051 1.178-.159 2.065m-4.828 7.475.04-.04-.107 1.081a1.54 1.54 0 0 1-.44.913l-1.298 1.3.054-.38c.072-.506-.034-.993-.172-1.418a9 9 0 0 0-.164-.45c.738-.065 1.462-.38 2.087-1.006M5.205 5c-.625.626-.94 1.351-1.004 2.09a9 9 0 0 0-.45-.164c-.424-.138-.91-.244-1.416-.172l-.38.054 1.3-1.3c.245-.246.566-.401.91-.44l1.08-.107zm9.406-3.961c-.38-.034-.967-.027-1.746.163-1.558.38-3.917 1.496-6.937 4.521-.62.62-.799 1.34-.687 2.051.107.676.483 1.362 1.048 1.928.564.565 1.25.941 1.924 1.049.71.112 1.429-.067 2.048-.688 3.079-3.083 4.192-5.444 4.556-6.987.183-.771.18-1.345.138-1.713a3 3 0 0 0-.045-.283 3 3 0 0 0-.3-.041Z" />
                  <path
                    d="M7.009 12.139a7.6 7.6 0 0 1-1.804-1.352A7.6 7.6 0 0 1 3.794 8.86c-1.102.992-1.965 5.054-1.839 5.18.125.126 3.936-.896 5.054-1.902Z" />
                </svg> Ресурсы</h3>
              <ul class="men">
                <li><a href="https://www.nstu.ru/"><span>НГТУ</span></a></li>
                <li><a href="https://ciu.nstu.ru/student_study"><span>ЛК НГТУ</span></a></li>
                <li><a href="https://dispace.edu.nstu.ru/"><span>DiSpace</span></a></li>
                <li><a href="https://www.rustore.ru/catalog/app/com.yourneti"><span>YourNETI</span></a></li>
                <li><a href="https://avtf.nstu.ru/"><span>АВТФ</span></a></li>
                <li><a href="/cprog/"><span>cprog</span></a></li>
                <li><a href="https://chat.deepseek.com/"><span>DeepSeek</span></a></li>
                <li><a href="https://chat.qwen.ai/"><span>Qwen</span></a></li>
                <li><a href="https://photomath.com"><span>PhotoMath</span></a></li>
              </ul>
            </div>
          </div>
        </div>
      </div>
    </div>
  <a href="#">
    <div class="bt">
      <p style="text-decoration: none;">^</p>
    </div>
  </a>
 </section>
                `
            },
            {
                id: 'lec',
                fileName: 'lec.html', 
                title: 'Лекции',
                // ВСТАВЬТЕ ТОЛЬКО СОДЕРЖИМОЕ ВНУТРИ BODY - БЕЗ <html>, <head>, <body>
                content: `
                    <div class="navb" id="navb">
    <div class="row">
      <div class="col-1">
        <a href="/"><img class="ml" id="ml" src="l.png" width="90px" style="position: relative;top:-10px"></a>
      </div>
      <div class="col-7" id="si">
        <div id="search-interface1">
          <div class="search-box1">
            <input type="text" id="search-input1" placeholder="Поиск 🔍">
            <button id="search-button1" style="display: none;">Найти</button>
          </div>

          <div id="search-results1">
            <div id="results-container1"></div>
          </div>
        </div>
      </div>
      <div class="col-2">
        <a onclick="openMenu()"><svg xmlns="http://www.w3.org/2000/svg" width="35" height="35" fill="currentColor"
            class="bi bi-columns-gap" viewBox="0 0 16 16">
            <path
              d="M6 1v3H1V1zM1 0a1 1 0 0 0-1 1v3a1 1 0 0 0 1 1h5a1 1 0 0 0 1-1V1a1 1 0 0 0-1-1zm14 12v3h-5v-3zm-5-1a1 1 0 0 0-1 1v3a1 1 0 0 0 1 1h5a1 1 0 0 0 1-1v-3a1 1 0 0 0-1-1zM6 8v7H1V8zM1 7a1 1 0 0 0-1 1v7a1 1 0 0 0 1 1h5a1 1 0 0 0 1-1V8a1 1 0 0 0-1-1zm14-6v7h-5V1zm-5-1a1 1 0 0 0-1 1v7a1 1 0 0 0 1 1h5a1 1 0 0 0 1-1V1a1 1 0 0 0-1-1z" />
          </svg>
          <p> Меню</p>
        </a>
      </div>
      <div class="col-1">
        <div class="ds">
          <label id="switch" class="switch">
            <input type="checkbox" onchange="toggleTheme()" id="slider">
            <span class="slider round"></span>
          </label>
        </div>
      </div>
    </div>
  </div>

  <section class="bsb-faq-3 py-3 py-md-5 py-xl-8">
    <div class="container">
      <div class="row justify-content-md-center">
        <div class="col-12 col-md-10 col-lg-8 col-xl-7 col-xxl-6">
          <h2 class="mb-4 display-5 text-center">Лекции</h2>
          <p class="text-secondary text-center lead fs-3">Для потока кафедры защиты информации 2025</p>
          <hr class="w-50 mx-auto mb-5 mb-xl-9 border-dark-subtle">
        </div>
      </div>
    </div>



    <div id="menu" class="menu">
      <div class="menu-content">

        <div class="container">
          <div class="row" style="margin-bottom: -1.5%;">
            <div class="col-md-10">
              <div class="time-widget">
                <div class="time" id="time"></div>
                <div class="date" id="date"></div>
                <div class="week" id="week"></div>
                <div class="date" id="datek"></div>
                <div class="week" id="weekk"></div>
              </div>
              <script>
                // Обновление каждую секунду
                setInterval(updateWidget, 1000);
                // Первоначальный запуск
                updateWidget();
              </script>
            </div>
            <div class="row">
              <div class="col-1">
                <a href="/"><img class="ml" id="ml" src="l.png" width="140px" style="position: relative;top:-10px"></a>
              </div>
              <div class="col-11">
                <div id="search-interface">
                  <div class="search-box">
                    <input type="text" id="search-input" placeholder="Поиск 🔍">
                    <button id="search-button" style="display: none;">Найти</button>
                  </div>
                  <div id="search-results">
                    <div id="results-container"></div>
                  </div>
                </div>
              </div>
              <div class="col-1">
                <span class="close" onclick="closeMenu()">&times;</span>
              </div>
            </div>

          </div>
          <div class="row">
            <div class="col">
              <h3 align="center"><svg xmlns="http://www.w3.org/2000/svg" width="20" height="20" fill="currentColor"
                  class="bi bi-house" viewBox="0 0 16 16">
                  <path
                    d="M8.707 1.5a1 1 0 0 0-1.414 0L.646 8.146a.5.5 0 0 0 .708.708L2 8.207V13.5A1.5 1.5 0 0 0 3.5 15h9a1.5 1.5 0 0 0 1.5-1.5V8.207l.646.647a.5.5 0 0 0 .708-.708L13 5.793V2.5a.5.5 0 0 0-.5-.5h-1a.5.5 0 0 0-.5.5v1.293zM13 7.207V13.5a.5.5 0 0 1-.5.5h-9a.5.5 0 0 1-.5-.5V7.207l5-5z" />
                </svg> Меню</h3>
              <ul class="men">
                <li><a href="/"><span>Главная</span></a></li>
                <li><a href="/lec.html"><span>Лекции</span></a></li>
                <li><a href="/pr.html"><span>Практики</span></a></li>
                <li><a href="/soft.html"><span>ПО</span></a></li>
                <li><a href="/pin.html"><span>Материалы</span></a></li>
                <li><a href="/books.html"><span>Учебники</span></a></li>
                <li><a href="/ave.apk"><span>APK</span></a></li>
              </ul>
              <h3 align="center"><svg xmlns="http://www.w3.org/2000/svg" width="20" height="20" fill="currentColor"
                  class="bi bi-compass" viewBox="0 0 16 16">
                  <path
                    d="M8 16.016a7.5 7.5 0 0 0 1.962-14.74A1 1 0 0 0 9 0H7a1 1 0 0 0-.962 1.276A7.5 7.5 0 0 0 8 16.016m6.5-7.5a6.5 6.5 0 1 1-13 0 6.5 6.5 0 0 1 13 0" />
                  <path d="m6.94 7.44 4.95-2.83-2.83 4.95-4.949 2.83 2.828-4.95z" />
                </svg> Конспекты</h3>
              <ul class="men">
                <li><a href="/lec.html#linal"><span>ЛинАл</span></a></li>
                <li><a href="/lec.html#olkk"><span>ОЛКК</span></a></li>
                <li><a href="/lec.html#istoria"><span>История</span></a></li>
                <li><a href="/lec.html#matan"><span>МатАнализ</span></a></li>
              </ul>
            </div>
            <div class="col">
              <h3 align="center"><svg xmlns="http://www.w3.org/2000/svg" width="20" height="20" fill="currentColor"
                  class="bi bi-people" viewBox="0 0 16 16">
                  <path
                    d="M15 14s1 0 1-1-1-4-5-4-5 3-5 4 1 1 1 1zm-7.978-1L7 12.996c.001-.264.167-1.03.76-1.72C8.312 10.629 9.282 10 11 10c1.717 0 2.687.63 3.24 1.276.593.69.758 1.457.76 1.72l-.008.002-.014.002zM11 7a2 2 0 1 0 0-4 2 2 0 0 0 0 4m3-2a3 3 0 1 1-6 0 3 3 0 0 1 6 0M6.936 9.28a6 6 0 0 0-1.23-.247A7 7 0 0 0 5 9c-4 0-5 3-5 4q0 1 1 1h4.216A2.24 2.24 0 0 1 5 13c0-1.01.377-2.042 1.09-2.904.243-.294.526-.569.846-.816M4.92 10A5.5 5.5 0 0 0 4 13H1c0-.26.164-1.03.76-1.724.545-.636 1.492-1.256 3.16-1.275ZM1.5 5.5a3 3 0 1 1 6 0 3 3 0 0 1-6 0m3-2a2 2 0 1 0 0 4 2 2 0 0 0 0-4" />
                </svg> Группы</h3>
              <ul class="men">
                <li><a href="#"><span>АБ-520</span></a></li>
                <li><a href="#"><span>АБ-521</span></a></li>
                <li><a href="#"><span>АБ-522</span></a></li>
                <li><a href="#"><span>АБ-523</span></a></li>
                <li><a href="#"><span>АБс-524</span></a></li>
                <li><a href="#"><span>АБс-525</span></a></li>
                <li><a href="#"><span>АБс-526</span></a></li>
                <li><a href="#"><span>АБс-527</span></a></li>
                <li><a href="#"><span>АИ-52</span></a></li>
              </ul>
            </div>
            <div class="col">
              <h3 align="center"><svg xmlns="http://www.w3.org/2000/svg" width="20" height="20" fill="currentColor"
                  class="bi bi-rocket-takeoff" viewBox="0 0 16 16">
                  <path
                    d="M9.752 6.193c.599.6 1.73.437 2.528-.362s.96-1.932.362-2.531c-.599-.6-1.73-.438-2.528.361-.798.8-.96 1.933-.362 2.532" />
                  <path
                    d="M15.811 3.312c-.363 1.534-1.334 3.626-3.64 6.218l-.24 2.408a2.56 2.56 0 0 1-.732 1.526L8.817 15.85a.51.51 0 0 1-.867-.434l.27-1.899c.04-.28-.013-.593-.131-.956a9 9 0 0 0-.249-.657l-.082-.202c-.815-.197-1.578-.662-2.191-1.277-.614-.615-1.079-1.379-1.275-2.195l-.203-.083a10 10 0 0 0-.655-.248c-.363-.119-.675-.172-.955-.132l-1.896.27A.51.51 0 0 1 .15 7.17l2.382-2.386c.41-.41.947-.67 1.524-.734h.006l2.4-.238C9.005 1.55 11.087.582 12.623.208c.89-.217 1.59-.232 2.08-.188.244.023.435.06.57.093q.1.026.16.045c.184.06.279.13.351.295l.029.073a3.5 3.5 0 0 1 .157.721c.055.485.051 1.178-.159 2.065m-4.828 7.475.04-.04-.107 1.081a1.54 1.54 0 0 1-.44.913l-1.298 1.3.054-.38c.072-.506-.034-.993-.172-1.418a9 9 0 0 0-.164-.45c.738-.065 1.462-.38 2.087-1.006M5.205 5c-.625.626-.94 1.351-1.004 2.09a9 9 0 0 0-.45-.164c-.424-.138-.91-.244-1.416-.172l-.38.054 1.3-1.3c.245-.246.566-.401.91-.44l1.08-.107zm9.406-3.961c-.38-.034-.967-.027-1.746.163-1.558.38-3.917 1.496-6.937 4.521-.62.62-.799 1.34-.687 2.051.107.676.483 1.362 1.048 1.928.564.565 1.25.941 1.924 1.049.71.112 1.429-.067 2.048-.688 3.079-3.083 4.192-5.444 4.556-6.987.183-.771.18-1.345.138-1.713a3 3 0 0 0-.045-.283 3 3 0 0 0-.3-.041Z" />
                  <path
                    d="M7.009 12.139a7.6 7.6 0 0 1-1.804-1.352A7.6 7.6 0 0 1 3.794 8.86c-1.102.992-1.965 5.054-1.839 5.18.125.126 3.936-.896 5.054-1.902Z" />
                </svg> Ресурсы</h3>
              <ul class="men">
                <li><a href="https://www.nstu.ru/"><span>НГТУ</span></a></li>
                <li><a href="https://ciu.nstu.ru/student_study"><span>ЛК НГТУ</span></a></li>
                <li><a href="https://dispace.edu.nstu.ru/"><span>DiSpace</span></a></li>
                <li><a href="https://www.rustore.ru/catalog/app/com.yourneti"><span>YourNETI</span></a></li>
                <li><a href="https://avtf.nstu.ru/"><span>АВТФ</span></a></li>
                <li><a href="/cprog/"><span>cprog</span></a></li>
                <li><a href="https://chat.deepseek.com/"><span>DeepSeek</span></a></li>
                <li><a href="https://chat.qwen.ai/"><span>Qwen</span></a></li>
                <li><a href="https://photomath.com"><span>PhotoMath</span></a></li>
              </ul>
            </div>
          </div>
        </div>
      </div>
    </div>

    <a href="#">
      <div class="bt">
        <p style="text-decoration: none;">^</p>
      </div>
    </a>

    <!-- Линал -->
    <div class="mb-8" id="linal">
      <div class="container">
        <div class="row justify-content-center">
          <div class="col-11 col-xl-10">
            <div class="d-flex align-items-end mb-5">
              <svg xmlns="http://www.w3.org/2000/svg" width="50" height="50" fill="var(--font-color)"
                class="bi bi-check2-circle" viewBox="0 0 16 16">
                <path
                  d="M2.5 8a5.5 5.5 0 0 1 8.25-4.764.5.5 0 0 0 .5-.866A6.5 6.5 0 1 0 14.5 8a.5.5 0 0 0-1 0 5.5 5.5 0 1 1-11 0" />
                <path
                  d="M15.354 3.354a.5.5 0 0 0-.708-.708L8 9.293 5.354 6.646a.5.5 0 1 0-.708.708l3 3a.5.5 0 0 0 .708 0z" />
              </svg>
              <h3 class="m-0">&nbsp;&nbsp;&nbsp;ЛинАл</h3>
            </div>
          </div>
          <div class="col-11 col-xl-10">
            <div class="accordion accordion-flush" id="faqRefund">
              <div class="accordion-item bg-transparent border-top border-bottom py-3">
                <h2 class="accordion-header" id="faqRefundHeading1">
                  <button class="accordion-button collapsed bg-transparent fw-bold shadow-none link-primary"
                    type="button" data-bs-toggle="collapse" data-bs-target="#faqRefundCollapse1" aria-expanded="false"
                    aria-controls="faqRefundCollapse1">
                    <p class="cv">Конспект 06.09.25</p>
                  </button>
                </h2>
                <div id="faqRefundCollapse1" class="accordion-collapse collapse" aria-labelledby="faqRefundHeading1">
                  <div class="accordion-body">
                    <img src="/img/линал/1.jpg">
                    <img src="/img/линал/2.jpg">
                    <img src="/img/линал/3.jpg">
                    <img src="/img/линал/4.jpg">
                    <img src="/img/линал/5.jpg">
                    <img src="/img/линал/6.jpg">
                  </div>
                </div>
              </div>
              <div class="accordion-item bg-transparent border-bottom py-3">
                <h2 class="accordion-header" id="faqRefundHeading2">
                  <button class="accordion-button collapsed bg-transparent fw-bold shadow-none link-primary"
                    type="button" data-bs-toggle="collapse" data-bs-target="#faqRefundCollapse2" aria-expanded="false"
                    aria-controls="faqRefundCollapse2">
                    <p class="cv">Конспект 13.09.25</p>
                  </button>
                </h2>
                <div id="faqRefundCollapse2" class="accordion-collapse collapse" aria-labelledby="faqRefundHeading2">
                  <div class="accordion-body">
                    <img src="/img/линал/6.jpg">
                    <img src="/img/линал/7.jpg">
                    <img src="/img/линал/8.jpg">
                    <img src="/img/линал/9.jpg">
                    <img src="/img/линал/10.jpg">
                    <img src="/img/линал/11.jpg">
                    <img src="/img/линал/12.jpg">
                    <img src="/img/линал/13.jpg">
                    <ul>
                  </div>
                </div>
              </div>
              <div class="accordion-item bg-transparent border-bottom py-3">
                <h2 class="accordion-header" id="faqRefundHeading3">
                  <button class="accordion-button collapsed bg-transparent fw-bold shadow-none link-primary"
                    type="button" data-bs-toggle="collapse" data-bs-target="#faqRefundCollapse3" aria-expanded="false"
                    aria-controls="faqRefundCollapse3">
                    <p class="cv">Конспект 20.09.25</p>
                  </button>
                </h2>
                <div id="faqRefundCollapse3" class="accordion-collapse collapse" aria-labelledby="faqRefundHeading3">
                  <div class="accordion-body">
                    <img src="/img/линал/13.jpg">
                    <img src="/img/линал/14.jpg">
                  </div>
                </div>
              </div>
              <div class="accordion-item bg-transparent border-bottom py-3">
                <h2 class="accordion-header" id="faqRefundHeading4">
                  <button class="accordion-button collapsed bg-transparent fw-bold shadow-none link-primary"
                    type="button" data-bs-toggle="collapse" data-bs-target="#faqRefundCollapse4" aria-expanded="false"
                    aria-controls="faqRefundCollapse4">
                    <p class="cv">Конспект 27.09.25</p>
                  </button>
                </h2>
                <div id="faqRefundCollapse4" class="accordion-collapse collapse" aria-labelledby="faqRefundHeading4">
                  <div class="accordion-body">
                    <img src="/img/линал/14.jpg">
                    <img src="/img/линал/15.jpg">
                    <img src="/img/линал/16.jpg">
                    <img src="/img/линал/17.jpg">
                    <img src="/img/линал/18.jpg">
                    <img src="/img/линал/19.jpg">
                    <img src="/img/линал/20.jpg">
                    <img src="/img/линал/21.jpg">
                    <img src="/img/линал/22.jpg">
                    <img src="/img/линал/23.jpg">
                  </div>
                </div>
              </div>
              <div class="accordion-item bg-transparent border-bottom py-3">
                <h2 class="accordion-header" id="faqRefundHeading5">
                  <button class="accordion-button collapsed bg-transparent fw-bold shadow-none link-primary"
                    type="button" data-bs-toggle="collapse" data-bs-target="#faqRefundCollapse5" aria-expanded="false"
                    aria-controls="faqRefundCollapse5">
                    <p class="cv">Конспект 04.10.25</p>
                  </button>
                </h2>
                <div id="faqRefundCollapse5" class="accordion-collapse collapse" aria-labelledby="faqRefundHeading5">
                  <div class="accordion-body">
                    <img src="/img/линал/23.jpg">
                    <img src="/img/линал/24.jpg">
                  </div>
                </div>
              </div>
              <div class="accordion-item bg-transparent border-bottom py-3">
                <h2 class="accordion-header" id="faqRefundHeading6">
                  <button class="accordion-button collapsed bg-transparent fw-bold shadow-none link-primary"
                    type="button" data-bs-toggle="collapse" data-bs-target="#faqRefundCollapse6" aria-expanded="false"
                    aria-controls="faqRefundCollapse6">
                    <p class="cv">Конспект 11.10.25</p>
                  </button>
                </h2>
                <div id="faqRefundCollapse6" class="accordion-collapse collapse" aria-labelledby="faqRefundHeading6">
                  <div class="accordion-body">
                    <img src="/img/линал/24.jpg">
                    <img src="/img/линал/25.jpg">
                    <img src="/img/линал/26.jpg">
                    <img src="/img/линал/27.jpg">
                    <img src="/img/линал/28.jpg">
                  </div>
                </div>
              </div>
              <div class="accordion-item bg-transparent border-bottom py-3">
                <h2 class="accordion-header" id="faqRefundHeading7">
                  <button class="accordion-button collapsed bg-transparent fw-bold shadow-none link-primary"
                    type="button" data-bs-toggle="collapse" data-bs-target="#faqRefundCollapse7" aria-expanded="false"
                    aria-controls="faqRefundCollapse7">
                    <p class="cv">Конспект 18.10.25</p>
                  </button>
                </h2>
                <div id="faqRefundCollapse7" class="accordion-collapse collapse" aria-labelledby="faqRefundHeading7">
                  <div class="accordion-body">
                    <img src="/img/линал/29.jpg">
                    <img src="/img/линал/30.jpg">
                    <img src="/img/линал/31.jpg">
                    <img src="/img/линал/32.jpg">
                    <img src="/img/линал/33.jpg">
                  </div>
                </div>
              </div>
              <div class="accordion-item bg-transparent border-bottom py-3">
                <h2 class="accordion-header" id="faqRefundHeading8">
                  <button class="accordion-button collapsed bg-transparent fw-bold shadow-none link-primary"
                    type="button" data-bs-toggle="collapse" data-bs-target="#faqRefundCollapse8" aria-expanded="false"
                    aria-controls="faqRefundCollapse8">
                    <p class="cv">Конспект 25.10.25</p>
                  </button>
                </h2>
                <div id="faqRefundCollapse8" class="accordion-collapse collapse" aria-labelledby="faqRefundHeading8">
                  <div class="accordion-body">
                    <img src="/img/линал/34.jpg">
                    <img src="/img/линал/35.jpg">
                    <img src="/img/линал/36.jpg">
                    <img src="/img/линал/37.jpg">
                    <img src="/img/линал/38.jpg">
                    <img src="/img/линал/39.jpg">
                    <img src="/img/линал/40.jpg">
                    <img src="/img/линал/41.jpg">
                    <img src="/img/линал/42.jpg">
                    <img src="/img/линал/43.jpg">
                  </div>
                </div>
              </div>
              <div class="accordion-item bg-transparent border-bottom py-3">
                <h2 class="accordion-header" id="faqRefundHeading9">
                  <button class="accordion-button collapsed bg-transparent fw-bold shadow-none link-primary"
                    type="button" data-bs-toggle="collapse" data-bs-target="#faqRefundCollapse9" aria-expanded="false"
                    aria-controls="faqRefundCollapse9">
                    <p class="cv">Конспект 01.11.25</p>
                  </button>
                </h2>
                <div id="faqRefundCollapse9" class="accordion-collapse collapse" aria-labelledby="faqRefundHeading9">
                  <div class="accordion-body">
                    <p>Временно отсутствует.</p>
                  </div>
                </div>
              </div>
              <div class="accordion-item bg-transparent border-bottom py-3">
                <h2 class="accordion-header" id="faqRefundHeading10">
                  <button class="accordion-button collapsed bg-transparent fw-bold shadow-none link-primary"
                    type="button" data-bs-toggle="collapse" data-bs-target="#faqRefundCollapse10" aria-expanded="false"
                    aria-controls="faqRefundCollapse10">
                    <p class="cv">Конспект 08.11.25</p>
                  </button>
                </h2>
                <div id="faqRefundCollapse10" class="accordion-collapse collapse" aria-labelledby="faqRefundHeading10">
                  <div class="accordion-body">
                    <p>Временно отсутствует.</p>
                  </div>
                </div>
              </div>
              <div class="accordion-item bg-transparent border-bottom py-3">
                <h2 class="accordion-header" id="faqRefundHeading11">
                  <button class="accordion-button collapsed bg-transparent fw-bold shadow-none link-primary"
                    type="button" data-bs-toggle="collapse" data-bs-target="#faqRefundCollapse11" aria-expanded="false"
                    aria-controls="faqRefundCollapse11">
                    <p class="cv">Конспект 15.11.25</p>
                  </button>
                </h2>
                <div id="faqRefundCollapse11" class="accordion-collapse collapse" aria-labelledby="faqRefundHeading11">
                  <div class="accordion-body">
                    <p>Временно отсутствует.</p>
                  </div>
                </div>
              </div>
              <div class="accordion-item bg-transparent border-bottom py-3">
                <h2 class="accordion-header" id="faqRefundHeading12">
                  <button class="accordion-button collapsed bg-transparent fw-bold shadow-none link-primary"
                    type="button" data-bs-toggle="collapse" data-bs-target="#faqRefundCollapse12" aria-expanded="false"
                    aria-controls="faqRefundCollapse12">
                    <p class="cv">Конспект 22.11.25</p>
                  </button>
                </h2>
                <div id="faqRefundCollapse12" class="accordion-collapse collapse" aria-labelledby="faqRefundHeading12">
                  <div class="accordion-body">
                    <p>Временно отсутствует.</p>
                  </div>
                </div>
              </div>
              <div class="accordion-item bg-transparent border-bottom py-3">
                <h2 class="accordion-header" id="faqRefundHeading13">
                  <button class="accordion-button collapsed bg-transparent fw-bold shadow-none link-primary"
                    type="button" data-bs-toggle="collapse" data-bs-target="#faqRefundCollapse13" aria-expanded="false"
                    aria-controls="faqRefundCollapse13">
                    <p class="cv">Конспект 29.11.25</p>
                  </button>
                </h2>
                <div id="faqRefundCollapse13" class="accordion-collapse collapse" aria-labelledby="faqRefundHeading13">
                  <div class="accordion-body">
                    <p>Временно отсутствует.</p>
                  </div>
                </div>
              </div>
            </div>
          </div>
        </div>
      </div>
    </div>
    <!--Участие-->
    <div class="mb-8" id="olkk">
      <div class="container">
        <div class="row justify-content-center">
          <div class="col-11 col-xl-10">
            <div class="d-flex align-items-end mb-5">
              <svg xmlns="http://www.w3.org/2000/svg" width="50" height="50" fill="var(--font-color)"
                class="bi bi-feather" viewBox="0 0 16 16">
                <path
                  d="M15.807.531c-.174-.177-.41-.289-.64-.363a3.8 3.8 0 0 0-.833-.15c-.62-.049-1.394 0-2.252.175C10.365.545 8.264 1.415 6.315 3.1S3.147 6.824 2.557 8.523c-.294.847-.44 1.634-.429 2.268.005.316.05.62.154.88q.025.061.056.122A68 68 0 0 0 .08 15.198a.53.53 0 0 0 .157.72.504.504 0 0 0 .705-.16 68 68 0 0 1 2.158-3.26c.285.141.616.195.958.182.513-.02 1.098-.188 1.723-.49 1.25-.605 2.744-1.787 4.303-3.642l1.518-1.55a.53.53 0 0 0 0-.739l-.729-.744 1.311.209a.5.5 0 0 0 .443-.15l.663-.684c.663-.68 1.292-1.325 1.763-1.892.314-.378.585-.752.754-1.107.163-.345.278-.773.112-1.188a.5.5 0 0 0-.112-.172M3.733 11.62C5.385 9.374 7.24 7.215 9.309 5.394l1.21 1.234-1.171 1.196-.027.03c-1.5 1.789-2.891 2.867-3.977 3.393-.544.263-.99.378-1.324.39a1.3 1.3 0 0 1-.287-.018Zm6.769-7.22c1.31-1.028 2.7-1.914 4.172-2.6a7 7 0 0 1-.4.523c-.442.533-1.028 1.134-1.681 1.804l-.51.524zm3.346-3.357C9.594 3.147 6.045 6.8 3.149 10.678c.007-.464.121-1.086.37-1.806.533-1.535 1.65-3.415 3.455-4.976 1.807-1.561 3.746-2.36 5.31-2.68a8 8 0 0 1 1.564-.173" />
              </svg>
              <h3 class="m-0">&nbsp;&nbsp;&nbsp;Основы личностной и коммуникативной культуры</h3>
            </div>
          </div>
          <h4 align="center">Королькова</h4>
          <div class="col-11 col-xl-10">
            <div class="accordion accordion-flush" id="faqRefund">
              <div class="accordion-item bg-transparent border-top border-bottom py-3">
                <h2 class="accordion-header" id="faqRefundHeading01">
                  <button class="accordion-button collapsed bg-transparent fw-bold shadow-none link-primary"
                    type="button" data-bs-toggle="collapse" data-bs-target="#faqRefundCollapse01" aria-expanded="false"
                    aria-controls="faqRefundCollapse01">
                    <p class="cv">Конспект 08.09.25</p>
                  </button>
                </h2>
                <div id="faqRefundCollapse01" class="accordion-collapse collapse" aria-labelledby="faqRefundHeading01">
                  <div class="accordion-body">
                    <img src="/img/олкк/1.jpg">
                    <img src="/img/олкк/2.jpg">
                    <img src="/img/олкк/3.jpg">
                    <img src="/img/олкк/4.jpg">
                    <img src="/img/олкк/5.jpg">
                    <img src="/img/олкк/6.jpg">
                    <img src="/img/олкк/7.jpg">
                    <img src="/img/олкк/8.jpg">
                    <img src="/img/олкк/9.jpg">
                    <img src="/img/олкк/10.jpg">
                    <img src="/img/олкк/11.jpg">
                  </div>
                </div>
              </div>
              <div class="accordion-item bg-transparent border-bottom py-3">
                <h2 class="accordion-header" id="faqRefundHeading02">
                  <button class="accordion-button collapsed bg-transparent fw-bold shadow-none link-primary"
                    type="button" data-bs-toggle="collapse" data-bs-target="#faqRefundCollapse02" aria-expanded="false"
                    aria-controls="faqRefundCollapse02">
                    <p class="cv">Конспект 22.09.25</p>
                  </button>
                </h2>
                <div id="faqRefundCollapse02" class="accordion-collapse collapse" aria-labelledby="faqRefundHeading02">
                  <div class="accordion-body">
                    <img src="/img/олкк/11.jpg">
                    <img src="/img/олкк/12.jpg">
                    <img src="/img/олкк/13.jpg">
                    <img src="/img/олкк/14.jpg">
                    <img src="/img/олкк/15.jpg">
                    <img src="/img/олкк/16.jpg">
                    <img src="/img/олкк/17.jpg">
                  </div>
                </div>
              </div>
              <div class="accordion-item bg-transparent border-bottom py-3">
                <h2 class="accordion-header" id="faqRefundHeading03">
                  <button class="accordion-button collapsed bg-transparent fw-bold shadow-none link-primary"
                    type="button" data-bs-toggle="collapse" data-bs-target="#faqRefundCollapse03" aria-expanded="false"
                    aria-controls="faqRefundCollapse03">
                    <p class="cv">Конспект 06.10.25</p>
                  </button>
                </h2>
                <div id="faqRefundCollapse03" class="accordion-collapse collapse" aria-labelledby="faqRefundHeading03">
                  <div class="accordion-body">
                    <img src="/img/олкк/16.jpg">
                    <img src="/img/олкк/17.jpg">
                    <img src="/img/олкк/18.jpg">
                    <img src="/img/олкк/19.jpg">
                    <img src="/img/олкк/20.jpg">
                    <img src="/img/олкк/21.jpg">
                    <img src="/img/олкк/22.jpg">

                  </div>
                </div>
              </div>
              <div class="accordion-item bg-transparent border-bottom py-3">
                <h2 class="accordion-header" id="faqRefundHeading04">
                  <button class="accordion-button collapsed bg-transparent fw-bold shadow-none link-primary"
                    type="button" data-bs-toggle="collapse" data-bs-target="#faqRefundCollapse04" aria-expanded="false"
                    aria-controls="faqRefundCollapse04">
                    <p class="cv">Конспект 20.10.25</p>
                  </button>
                </h2>
                <div id="faqRefundCollapse04" class="accordion-collapse collapse" aria-labelledby="faqRefundHeading04">
                  <div class="accordion-body">
                    <img src="/img/олкк/23.jpg">
                    <img src="/img/олкк/24.jpg">
                    <img src="/img/олкк/25.jpg">
                    <img src="/img/олкк/26.jpg">
                    <img src="/img/олкк/27.jpg">
                    <img src="/img/олкк/28.jpg">
                    <img src="/img/олкк/29.jpg">
                    <img src="/img/олкк/30.jpg">
                    <img src="/img/олкк/31.jpg">
                    <img src="/img/олкк/32.jpg">
                    <img src="/img/олкк/33.jpg">
                    <img src="/img/олкк/34.jpg">
                    <img src="/img/олкк/35.jpg">
                    <img src="/img/олкк/36.jpg">
                    <img src="/img/олкк/37.jpg">
                  </div>
                </div>
              </div>
              <h4 align="center">Стуканов</h4>
              <div class="accordion-item bg-transparent border-bottom py-3">
                <h2 class="accordion-header" id="faqRefundHeading05">
                  <button class="accordion-button collapsed bg-transparent fw-bold shadow-none link-primary"
                    type="button" data-bs-toggle="collapse" data-bs-target="#faqRefundCollapse05" aria-expanded="false"
                    aria-controls="faqRefundCollapse05">
                    <p class="cv">Конспект 03.01.25</p>
                  </button>
                </h2>
                <div id="faqRefundCollapse05" class="accordion-collapse collapse" aria-labelledby="faqRefundHeading05">
                  <div class="accordion-body">
                    <p>Временно отсутствует.</p>
                  </div>
                </div>
              </div>

              <div class="accordion-item bg-transparent border-bottom py-3">
                <h2 class="accordion-header" id="faqRefundHeading06">
                  <button class="accordion-button collapsed bg-transparent fw-bold shadow-none link-primary"
                    type="button" data-bs-toggle="collapse" data-bs-target="#faqRefundCollapse06" aria-expanded="false"
                    aria-controls="faqRefundCollapse06">
                    <p class="cv">Конспект 17.11.25</p>
                  </button>
                </h2>
                <div id="faqRefundCollapse06" class="accordion-collapse collapse" aria-labelledby="faqRefundHeading06">
                  <div class="accordion-body">
                    <p>Временно отсутствует.</p>
                  </div>
                </div>
              </div>
              <div class="accordion-item bg-transparent border-bottom py-3">
                <h2 class="accordion-header" id="faqRefundHeading07">
                  <button class="accordion-button collapsed bg-transparent fw-bold shadow-none link-primary"
                    type="button" data-bs-toggle="collapse" data-bs-target="#faqRefundCollapse07" aria-expanded="false"
                    aria-controls="faqRefundCollapse07">
                    <p class="cv">Конспект 01.12.25</p>
                  </button>
                </h2>
                <div id="faqRefundCollapse07" class="accordion-collapse collapse" aria-labelledby="faqRefundHeading07">
                  <div class="accordion-body">
                    <p>Временно отсутствует.</p>
                  </div>
                </div>
              </div>

              <div class="accordion-item bg-transparent border-bottom py-3">
                <h2 class="accordion-header" id="faqRefundHeading08">
                  <button class="accordion-button collapsed bg-transparent fw-bold shadow-none link-primary"
                    type="button" data-bs-toggle="collapse" data-bs-target="#faqRefundCollapse08" aria-expanded="false"
                    aria-controls="faqRefundCollapse08">
                    <p class="cv">Конспект 15.12.25</p>
                  </button>
                </h2>
                <div id="faqRefundCollapse08" class="accordion-collapse collapse" aria-labelledby="faqRefundHeading08">
                  <div class="accordion-body">
                    <p>Временно отсутствует.</p>
                  </div>
                </div>
              </div>
              <div class="accordion-item bg-transparent border-bottom py-3">
                <h2 class="accordion-header" id="faqRefundHeading09">
                  <button class="accordion-button collapsed bg-transparent fw-bold shadow-none link-primary"
                    type="button" data-bs-toggle="collapse" data-bs-target="#faqRefundCollapse09" aria-expanded="false"
                    aria-controls="faqRefundCollapse09">
                    <p class="cv">Конспект 29.12.25</p>
                  </button>
                </h2>
                <div id="faqRefundCollapse09" class="accordion-collapse collapse" aria-labelledby="faqRefundHeading09">
                  <div class="accordion-body">
                    <p>Временно отсутствует.</p>
                  </div>
                </div>
              </div>
            </div>
          </div>
        </div>
      </div>
    </div>
    <!--Проживание-->
    <div class="mb-8" id="istoria">
      <div class="container">
        <div class="row justify-content-center">
          <div class="col-11 col-xl-10">
            <div class="d-flex align-items-end mb-5">
              <svg xmlns="http://www.w3.org/2000/svg" width="50" height="50" fill="var(--font-color)" class="bi bi-flag"
                viewBox="0 0 16 16">
                <path
                  d="M14.778.085A.5.5 0 0 1 15 .5V8a.5.5 0 0 1-.314.464L14.5 8l.186.464-.003.001-.006.003-.023.009a12 12 0 0 1-.397.15c-.264.095-.631.223-1.047.35-.816.252-1.879.523-2.71.523-.847 0-1.548-.28-2.158-.525l-.028-.01C7.68 8.71 7.14 8.5 6.5 8.5c-.7 0-1.638.23-2.437.477A20 20 0 0 0 3 9.342V15.5a.5.5 0 0 1-1 0V.5a.5.5 0 0 1 1 0v.282c.226-.079.496-.17.79-.26C4.606.272 5.67 0 6.5 0c.84 0 1.524.277 2.121.519l.043.018C9.286.788 9.828 1 10.5 1c.7 0 1.638-.23 2.437-.477a20 20 0 0 0 1.349-.476l.019-.007.004-.002h.001M14 1.221c-.22.078-.48.167-.766.255-.81.252-1.872.523-2.734.523-.886 0-1.592-.286-2.203-.534l-.008-.003C7.662 1.21 7.139 1 6.5 1c-.669 0-1.606.229-2.415.478A21 21 0 0 0 3 1.845v6.433c.22-.078.48-.167.766-.255C4.576 7.77 5.638 7.5 6.5 7.5c.847 0 1.548.28 2.158.525l.028.01C9.32 8.29 9.86 8.5 10.5 8.5c.668 0 1.606-.229 2.415-.478A21 21 0 0 0 14 7.655V1.222z" />
              </svg>
              <h3 class="m-0">&nbsp;&nbsp;&nbsp;История</h3>
            </div>
          </div>
          <div class="col-11 col-xl-10">
            <div class="accordion accordion-flush" id="faqAccount">
              <div class="accordion-item bg-transparent border-top border-bottom py-3">
                <h2 class="accordion-header" id="faqAccountHeading1">
                  <button class="accordion-button collapsed bg-transparent fw-bold shadow-none link-primary"
                    type="button" data-bs-toggle="collapse" data-bs-target="#faqAccountCollapse1" aria-expanded="false"
                    aria-controls="faqAccountCollapse1">
                    <p class="cv">Лекция 1</p>
                  </button>
                </h2>
                <div id="faqAccountCollapse1" class="accordion-collapse collapse" aria-labelledby="faqAccountHeading1">
                  <div class="accordion-body">
                    <img src="/img/история/1.jpg">
                    <img src="/img/история/2.jpg">
                    <img src="/img/история/3.jpg">
                    <img src="/img/история/4.jpg">
                    <img src="/img/история/5.jpg">
                    <img src="/img/история/6.jpg">
                    <img src="/img/история/7.jpg">
                    <img src="/img/история/8.jpg">
                    <img src="/img/история/9.jpg">
                    <img src="/img/история/10.jpg">
                    <img src="/img/история/11.jpg">
                    <img src="/img/история/12.jpg">
                    <img src="/img/история/13.jpg">
                  </div>
                </div>
              </div>
              <div class="accordion-item bg-transparent border-bottom py-3">
                <h2 class="accordion-header" id="faqAccountHeading2">
                  <button class="accordion-button collapsed bg-transparent fw-bold shadow-none link-primary"
                    type="button" data-bs-toggle="collapse" data-bs-target="#faqAccountCollapse2" aria-expanded="false"
                    aria-controls="faqAccountCollapse2">
                    <p class="cv">Лекция 2</p>
                  </button>
                </h2>
                <div id="faqAccountCollapse2" class="accordion-collapse collapse" aria-labelledby="faqAccountHeading2">
                  <div class="accordion-body">
                    <img src="/img/история/14.jpg">
                    <img src="/img/история/15.jpg">
                    <img src="/img/история/16.jpg">
                    <img src="/img/история/17.jpg">
                    <img src="/img/история/18.jpg">
                    <img src="/img/история/19.jpg">
                    <img src="/img/история/20.jpg">
                    <img src="/img/история/21.jpg">
                    <img src="/img/история/22.jpg">
                    <img src="/img/история/23.jpg">
                    <img src="/img/история/24.jpg">
                    <img src="/img/история/25.jpg">
                    <img src="/img/история/26.jpg">
                    <img src="/img/история/27.jpg">
                    <img src="/img/история/28.jpg">
                    <img src="/img/история/29.jpg">
                    <img src="/img/история/30.jpg">
                    <img src="/img/история/31.jpg">
                    <img src="/img/история/32.jpg">
                  </div>
                </div>
              </div>
              <div class="accordion-item bg-transparent border-bottom py-3">
                <h2 class="accordion-header" id="faqAccountHeading3">
                  <button class="accordion-button collapsed bg-transparent fw-bold shadow-none link-primary"
                    type="button" data-bs-toggle="collapse" data-bs-target="#faqAccountCollapse3" aria-expanded="false"
                    aria-controls="faqAccountCollapse3">
                    <p class="cv">Лекция 3</p>
                  </button>
                </h2>
                <div id="faqAccountCollapse3" class="accordion-collapse collapse" aria-labelledby="faqAccountHeading3">
                  <div class="accordion-body">
                    <img src="/img/история/33.jpg">
                    <img src="/img/история/34.jpg">
                    <img src="/img/история/35.jpg">
                    <img src="/img/история/36.jpg">
                    <img src="/img/история/37.jpg">
                    <img src="/img/история/38.jpg">
                    <img src="/img/история/39.jpg">
                    <img src="/img/история/40.jpg">
                    <img src="/img/история/41.jpg">
                    <img src="/img/история/42.jpg">
                    <img src="/img/история/43.jpg">
                    <img src="/img/история/44.jpg">
                    <img src="/img/история/45.jpg">
                    <img src="/img/история/46.jpg">
                    <img src="/img/история/47.jpg">
                    <img src="/img/история/48.jpg">
                  </div>
                </div>
              </div>
              <div class="accordion-item bg-transparent border-bottom py-3">
                <h2 class="accordion-header" id="faqAccountHeading4">
                  <button class="accordion-button collapsed bg-transparent fw-bold shadow-none link-primary"
                    type="button" data-bs-toggle="collapse" data-bs-target="#faqAccountCollapse4" aria-expanded="false"
                    aria-controls="faqAccountCollapse4">
                    <p class="cv">Лекция 4</p>
                  </button>
                </h2>
                <div id="faqAccountCollapse4" class="accordion-collapse collapse" aria-labelledby="faqAccountHeading4">
                  <div class="accordion-body">
                    <img src="/img/история/49.jpg">
                    <img src="/img/история/50.jpg">
                    <img src="/img/история/51.jpg">
                    <img src="/img/история/52.jpg">
                    <img src="/img/история/53.jpg">
                    <img src="/img/история/54.jpg">
                    <img src="/img/история/55.jpg">
                    <img src="/img/история/56.jpg">
                    <img src="/img/история/57.jpg">
                    <img src="/img/история/58.jpg">
                    <img src="/img/история/59.jpg">
                    <img src="/img/история/60.jpg">
                    <img src="/img/история/61.jpg">
                    <img src="/img/история/62.jpg">
                    <img src="/img/история/63.jpg">
                  </div>
                </div>
              </div>
              <div class="accordion-item bg-transparent border-bottom py-3">
                <h2 class="accordion-header" id="faqAccountHeading5">
                  <button class="accordion-button collapsed bg-transparent fw-bold shadow-none link-primary"
                    type="button" data-bs-toggle="collapse" data-bs-target="#faqAccountCollapse5" aria-expanded="false"
                    aria-controls="faqAccountCollapse5">
                    <p class="cv">Лекция 5</p>
                  </button>
                </h2>
                <div id="faqAccountCollapse5" class="accordion-collapse collapse" aria-labelledby="faqAccountHeading5">
                  <div class="accordion-body">
                    <img src="/img/история/64.jpg">
                    <img src="/img/история/65.jpg">
                    <img src="/img/история/66.jpg">
                    <img src="/img/история/67.jpg">
                    <img src="/img/история/68.jpg">
                    <img src="/img/история/69.jpg">
                    <img src="/img/история/70.jpg">
                    <img src="/img/история/71.jpg">
                    <img src="/img/история/72.jpg">
                    <img src="/img/история/73.jpg">
                    <img src="/img/история/74.jpg">
                    <img src="/img/история/75.jpg">
                    <img src="/img/история/76.jpg">
                    <img src="/img/история/77.jpg">
                    <img src="/img/история/78.jpg">
                    <img src="/img/история/79.jpg">
                    <img src="/img/история/80.jpg">
                    <img src="/img/история/81.jpg">
                  </div>
                </div>
              </div>
              <div class="accordion-item bg-transparent border-bottom py-3">
                <h2 class="accordion-header" id="faqRefundHeading6">
                  <button class="accordion-button collapsed bg-transparent fw-bold shadow-none link-primary"
                    type="button" data-bs-toggle="collapse" data-bs-target="#faqRefundCollapse6" aria-expanded="false"
                    aria-controls="faqRefundCollapse6">
                    <p class="cv">Лекция 6</p>
                  </button>
                </h2>
                <div id="faqRefundCollapse6" class="accordion-collapse collapse" aria-labelledby="faqRefundHeading6">
                  <div class="accordion-body">
                    <img src="/img/история/82.jpg">
                    <img src="/img/история/83.jpg">
                    <img src="/img/история/84.jpg">
                    <img src="/img/история/85.jpg">
                    <img src="/img/история/86.jpg">
                    <img src="/img/история/87.jpg">
                    <img src="/img/история/88.jpg">
                    <img src="/img/история/89.jpg">
                    <img src="/img/история/90.jpg">
                    <img src="/img/история/91.jpg">
                    <img src="/img/история/92.jpg">
                    <img src="/img/история/93.jpg">
                    <img src="/img/история/94.jpg">
                    <img src="/img/история/95.jpg">
                    <img src="/img/история/96.jpg">
                    <img src="/img/история/97.jpg">
                  </div>
                </div>
              </div>
              <div class="accordion-item bg-transparent border-bottom py-3">
                <h2 class="accordion-header" id="faqRefundHeading7">
                  <button class="accordion-button collapsed bg-transparent fw-bold shadow-none link-primary"
                    type="button" data-bs-toggle="collapse" data-bs-target="#faqRefundCollapse7" aria-expanded="false"
                    aria-controls="faqRefundCollapse7">
                    <p class="cv">Лекция 7</p>
                  </button>
                </h2>
                <div id="faqRefundCollapse7" class="accordion-collapse collapse" aria-labelledby="faqRefundHeading7">
                  <div class="accordion-body">
                    <img src="/img/история/98.jpg">
                    <img src="/img/история/99.jpg">
                    <img src="/img/история/100.jpg">
                    <img src="/img/история/101.jpg">
                    <img src="/img/история/102.jpg">
                    <img src="/img/история/103.jpg">
                    <img src="/img/история/104.jpg">
                    <img src="/img/история/105.jpg">
                    <img src="/img/история/106.jpg">
                    <img src="/img/история/107.jpg">
                    <img src="/img/история/108.jpg">
                    <img src="/img/история/109.jpg">
                    <img src="/img/история/110.jpg">
                    <img src="/img/история/111.jpg">
                    <img src="/img/история/112.jpg">
                    <img src="/img/история/113.jpg">
                    <img src="/img/история/114.jpg">
                    <img src="/img/история/115.jpg">
                    <img src="/img/история/116.jpg">
                    <img src="/img/история/117.jpg">
                  </div>
                </div>
              </div>
              <div class="accordion-item bg-transparent border-bottom py-3">
                <h2 class="accordion-header" id="faqRefundHeading8">
                  <button class="accordion-button collapsed bg-transparent fw-bold shadow-none link-primary"
                    type="button" data-bs-toggle="collapse" data-bs-target="#faqRefundCollapse8" aria-expanded="false"
                    aria-controls="faqRefundCollapse8">
                    <p class="cv">Лекция 8</p>
                  </button>
                </h2>
                <div id="faqRefundCollapse8" class="accordion-collapse collapse" aria-labelledby="faqRefundHeading8">
                  <div class="accordion-body">
                    <img src="/img/история/118.jpg">
                    <img src="/img/история/119.jpg">
                    <img src="/img/история/120.jpg">
                    <img src="/img/история/121.jpg">
                    <img src="/img/история/122.jpg">
                    <img src="/img/история/123.jpg">
                    <img src="/img/история/124.jpg">
                    <img src="/img/история/125.jpg">
                    <img src="/img/история/126.jpg">
                    <img src="/img/история/127.jpg">
                    <img src="/img/история/128.jpg">
                    <img src="/img/история/129.jpg">
                    <img src="/img/история/130.jpg">
                    <img src="/img/история/131.jpg">
                    <img src="/img/история/132.jpg">
                    <img src="/img/история/133.jpg">
                    <img src="/img/история/134.jpg">
                    <img src="/img/история/135.jpg">
                    <img src="/img/история/136.jpg">
                    <img src="/img/история/137.jpg">
                    <img src="/img/история/138.jpg">
                    <img src="/img/история/139.jpg">
                    <img src="/img/история/140.jpg">
                  </div>
                </div>
              </div>
              <div class="accordion-item bg-transparent border-bottom py-3">
                <h2 class="accordion-header" id="faqRefundHeading9">
                  <button class="accordion-button collapsed bg-transparent fw-bold shadow-none link-primary"
                    type="button" data-bs-toggle="collapse" data-bs-target="#faqRefundCollapse9" aria-expanded="false"
                    aria-controls="faqRefundCollapse9">
                    <p class="cv">Лекция 9</p>
                  </button>
                </h2>
                <div id="faqRefundCollapse9" class="accordion-collapse collapse" aria-labelledby="faqRefundHeading9">
                  <div class="accordion-body">
                    <img src="/img/история/141.jpg">
                    <img src="/img/история/142.jpg">
                    <img src="/img/история/143.jpg">
                    <img src="/img/история/144.jpg">
                    <img src="/img/история/145.jpg">
                    <img src="/img/история/146.jpg">
                    <img src="/img/история/147.jpg">
                    <img src="/img/история/148.jpg">
                    <img src="/img/история/149.jpg">
                    <img src="/img/история/150.jpg">
                    <img src="/img/история/151.jpg">
                    <img src="/img/история/152.jpg">
                    <img src="/img/история/153.jpg">
                    <img src="/img/история/154.jpg">
                    <img src="/img/история/155.jpg">
                    <img src="/img/история/156.jpg">
                    <img src="/img/история/157.jpg">
                    <img src="/img/история/158.jpg">
                  </div>
                </div>
              </div>
              <div class="accordion-item bg-transparent border-bottom py-3">
                <h2 class="accordion-header" id="faqRefundHeading10">
                  <button class="accordion-button collapsed bg-transparent fw-bold shadow-none link-primary"
                    type="button" data-bs-toggle="collapse" data-bs-target="#faqRefundCollapse10" aria-expanded="false"
                    aria-controls="faqRefundCollapse10">
                    <p class="cv">Лекция 10</p>
                  </button>
                </h2>
                <div id="faqRefundCollapse10" class="accordion-collapse collapse" aria-labelledby="faqRefundHeading10">
                  <div class="accordion-body">
                    <img src="/img/история/159.jpg">
                    <img src="/img/история/160.jpg">
                    <img src="/img/история/161.jpg">
                    <img src="/img/история/162.jpg">
                    <img src="/img/история/163.jpg">
                    <img src="/img/история/164.jpg">
                    <img src="/img/история/165.jpg">
                    <img src="/img/история/166.jpg">
                    <img src="/img/история/167.jpg">
                    <img src="/img/история/168.jpg">
                    <img src="/img/история/169.jpg">
                    <img src="/img/история/170.jpg">
                    <img src="/img/история/171.jpg">
                    <img src="/img/история/172.jpg">
                    <img src="/img/история/173.jpg">
                    <img src="/img/история/174.jpg">
                    <img src="/img/история/175.jpg">
                    <img src="/img/история/176.jpg">
                    <img src="/img/история/177.jpg">
                  </div>
                </div>
              </div>
              <div class="accordion-item bg-transparent border-bottom py-3">
                <h2 class="accordion-header" id="faqRefundHeading11">
                  <button class="accordion-button collapsed bg-transparent fw-bold shadow-none link-primary"
                    type="button" data-bs-toggle="collapse" data-bs-target="#faqRefundCollapse11" aria-expanded="false"
                    aria-controls="faqRefundCollapse11">
                    <p class="cv">Лекция 11</p>
                  </button>
                </h2>
                <div id="faqRefundCollapse11" class="accordion-collapse collapse" aria-labelledby="faqRefundHeading11">
                  <div class="accordion-body">
                    <img src="/img/история/178.jpg">
                    <img src="/img/история/179.jpg">
                    <img src="/img/история/180.jpg">
                    <img src="/img/история/181.jpg">
                    <img src="/img/история/182.jpg">
                    <img src="/img/история/183.jpg">
                    <img src="/img/история/184.jpg">
                    <img src="/img/история/185.jpg">
                    <img src="/img/история/186.jpg">
                    <img src="/img/история/187.jpg">
                    <img src="/img/история/188.jpg">
                    <img src="/img/история/189.jpg">
                    <img src="/img/история/190.jpg">
                    <img src="/img/история/191.jpg">
                    <img src="/img/история/192.jpg">
                    <img src="/img/история/193.jpg">
                    <img src="/img/история/194.jpg">
                    <img src="/img/история/195.jpg">
                    <img src="/img/история/196.jpg">
                    <img src="/img/история/197.jpg">
                    <img src="/img/история/198.jpg">
                  </div>
                </div>
              </div>
              <div class="accordion-item bg-transparent border-bottom py-3">
                <h2 class="accordion-header" id="faqRefundHeading12">
                  <button class="accordion-button collapsed bg-transparent fw-bold shadow-none link-primary"
                    type="button" data-bs-toggle="collapse" data-bs-target="#faqRefundCollapse12" aria-expanded="false"
                    aria-controls="faqRefundCollapse12">
                    <p class="cv">Лекция 12</p>
                  </button>
                </h2>
                <div id="faqRefundCollapse12" class="accordion-collapse collapse" aria-labelledby="faqRefundHeading12">
                  <div class="accordion-body">
                    <img src="/img/история/199.jpg">
                    <img src="/img/история/200.jpg">
                    <img src="/img/история/201.jpg">
                    <img src="/img/история/202.jpg">
                    <img src="/img/история/203.jpg">
                    <img src="/img/история/204.jpg">
                    <img src="/img/история/205.jpg">
                    <img src="/img/история/206.jpg">
                    <img src="/img/история/207.jpg">
                    <img src="/img/история/208.jpg">
                    <img src="/img/история/209.jpg">
                    <img src="/img/история/210.jpg">
                    <img src="/img/история/211.jpg">
                    <img src="/img/история/212.jpg">
                    <img src="/img/история/213.jpg">
                    <img src="/img/история/214.jpg">
                    <img src="/img/история/215.jpg">
                    <img src="/img/история/216.jpg">
                    <img src="/img/история/217.jpg">
                    <img src="/img/история/218.jpg">
                  </div>
                </div>
              </div>
              <div class="accordion-item bg-transparent border-bottom py-3">
                <h2 class="accordion-header" id="faqRefundHeading13">
                  <button class="accordion-button collapsed bg-transparent fw-bold shadow-none link-primary"
                    type="button" data-bs-toggle="collapse" data-bs-target="#faqRefundCollapse13" aria-expanded="false"
                    aria-controls="faqRefundCollapse13">
                    <p class="cv">Лекция 13</p>
                  </button>
                </h2>
                <div id="faqRefundCollapse13" class="accordion-collapse collapse" aria-labelledby="faqRefundHeading13">
                  <div class="accordion-body">
                    <img src="/img/история/219.jpg">
                    <img src="/img/история/220.jpg">
                    <img src="/img/история/221.jpg">
                    <img src="/img/история/222.jpg">
                    <img src="/img/история/223.jpg">
                    <img src="/img/история/224.jpg">
                    <img src="/img/история/225.jpg">
                    <img src="/img/история/226.jpg">
                    <img src="/img/история/227.jpg">
                    <img src="/img/история/228.jpg">
                    <img src="/img/история/229.jpg">
                    <img src="/img/история/230.jpg">
                    <img src="/img/история/231.jpg">
                    <img src="/img/история/232.jpg">
                    <img src="/img/история/233.jpg">
                    <img src="/img/история/234.jpg">
                    <img src="/img/история/235.jpg">
                    <img src="/img/история/236.jpg">
                    <img src="/img/история/237.jpg">
                    <img src="/img/история/238.jpg">
                  </div>
                </div>
              </div>
              <div class="accordion-item bg-transparent border-bottom py-3">
                <h2 class="accordion-header" id="faqRefundHeading14">
                  <button class="accordion-button collapsed bg-transparent fw-bold shadow-none link-primary"
                    type="button" data-bs-toggle="collapse" data-bs-target="#faqRefundCollapse14" aria-expanded="false"
                    aria-controls="faqRefundCollapse14">
                    <p class="cv">Лекция 14</p>
                  </button>
                </h2>
                <div id="faqRefundCollapse14" class="accordion-collapse collapse" aria-labelledby="faqRefundHeading14">
                  <div class="accordion-body">
                    <img src="/img/история/239.jpg">
                    <img src="/img/история/240.jpg">
                    <img src="/img/история/241.jpg">
                    <img src="/img/история/242.jpg">
                    <img src="/img/история/243.jpg">
                    <img src="/img/история/244.jpg">
                    <img src="/img/история/245.jpg">
                    <img src="/img/история/246.jpg">
                    <img src="/img/история/247.jpg">
                    <img src="/img/история/248.jpg">
                    <img src="/img/история/249.jpg">
                    <img src="/img/история/250.jpg">
                    <img src="/img/история/251.jpg">
                    <img src="/img/история/252.jpg">
                    <img src="/img/история/253.jpg">
                    <img src="/img/история/254.jpg">
                    <img src="/img/история/255.jpg">
                    <img src="/img/история/256.jpg">
                    <img src="/img/история/257.jpg">
                  </div>
                </div>
              </div>
              <div class="accordion-item bg-transparent border-bottom py-3">
                <h2 class="accordion-header" id="faqRefundHeading15">
                  <button class="accordion-button collapsed bg-transparent fw-bold shadow-none link-primary"
                    type="button" data-bs-toggle="collapse" data-bs-target="#faqRefundCollapse15" aria-expanded="false"
                    aria-controls="faqRefundCollapse15">
                    <p class="cv">Лекция 15</p>
                  </button>
                </h2>
                <div id="faqRefundCollapse15" class="accordion-collapse collapse" aria-labelledby="faqRefundHeading15">
                  <div class="accordion-body">
                    <img src="/img/история/258.jpg">
                    <img src="/img/история/259.jpg">
                    <img src="/img/история/260.jpg">
                    <img src="/img/история/261.jpg">
                    <img src="/img/история/262.jpg">
                    <img src="/img/история/263.jpg">
                    <img src="/img/история/264.jpg">
                    <img src="/img/история/265.jpg">
                    <img src="/img/история/266.jpg">
                    <img src="/img/история/267.jpg">
                    <img src="/img/история/268.jpg">
                    <img src="/img/история/269.jpg">
                    <img src="/img/история/270.jpg">
                    <img src="/img/история/271.jpg">
                    <img src="/img/история/272.jpg">
                    <img src="/img/история/273.jpg">
                    <img src="/img/история/274.jpg">
                  </div>
                </div>
              </div>
              <div class="accordion-item bg-transparent border-bottom py-3">
                <h2 class="accordion-header" id="faqRefundHeading16">
                  <button class="accordion-button collapsed bg-transparent fw-bold shadow-none link-primary"
                    type="button" data-bs-toggle="collapse" data-bs-target="#faqRefundCollapse16" aria-expanded="false"
                    aria-controls="faqRefundCollapse16">
                    <p class="cv">Лекция 16</p>
                  </button>
                </h2>
                <div id="faqRefundCollapse16" class="accordion-collapse collapse" aria-labelledby="faqRefundHeading16">
                  <div class="accordion-body">
                    <img src="/img/история/275.jpg">
                    <img src="/img/история/276.jpg">
                    <img src="/img/история/277.jpg">
                    <img src="/img/история/278.jpg">
                    <img src="/img/история/279.jpg">
                    <img src="/img/история/280.jpg">
                    <img src="/img/история/281.jpg">
                    <img src="/img/история/282.jpg">
                    <img src="/img/история/283.jpg">
                    <img src="/img/история/284.jpg">
                    <img src="/img/история/285.jpg">
                    <img src="/img/история/286.jpg">
                    <img src="/img/история/287.jpg">
                    <img src="/img/история/288.jpg">
                    <img src="/img/история/289.jpg">
                    <img src="/img/история/290.jpg">
                    <img src="/img/история/291.jpg">
                    <img src="/img/история/292.jpg">
                    <img src="/img/история/293.jpg">
                    <img src="/img/история/294.jpg">
                  </div>
                </div>
              </div>
              <div class="accordion-item bg-transparent border-bottom py-3">
                <h2 class="accordion-header" id="faqRefundHeading17">
                  <button class="accordion-button collapsed bg-transparent fw-bold shadow-none link-primary"
                    type="button" data-bs-toggle="collapse" data-bs-target="#faqRefundCollapse17" aria-expanded="false"
                    aria-controls="faqRefundCollapse17">
                    <p class="cv">Лекция 17</p>
                  </button>
                </h2>
                <div id="faqRefundCollapse17" class="accordion-collapse collapse" aria-labelledby="faqRefundHeading17">
                  <div class="accordion-body">
                    <img src="/img/история/295.jpg">
                    <img src="/img/история/296.jpg">
                    <img src="/img/история/297.jpg">
                    <img src="/img/история/298.jpg">
                    <img src="/img/история/299.jpg">
                    <img src="/img/история/300.jpg">
                    <img src="/img/история/301.jpg">
                    <img src="/img/история/302.jpg">
                    <img src="/img/история/303.jpg">
                    <img src="/img/история/304.jpg">
                    <img src="/img/история/305.jpg">
                    <img src="/img/история/306.jpg">
                    <img src="/img/история/307.jpg">
                    <img src="/img/история/308.jpg">
                    <img src="/img/история/309.jpg">
                    <img src="/img/история/310.jpg">
                  </div>
                </div>
              </div>
            </div>
          </div>
        </div>
      </div>
    </div>
    <!-- Проезд -->
    <div class="mb-0" id="matan">
      <div class="container">
        <div class="row justify-content-center">
          <div class="col-11 col-xl-10">
            <div class="d-flex align-items-end mb-5">
              <svg xmlns="http://www.w3.org/2000/svg" width="50" height="50" fill="var(--font-color)"
                class="bi bi-activity" viewBox="0 0 16 16">
                <path fill-rule="evenodd"
                  d="M6 2a.5.5 0 0 1 .47.33L10 12.036l1.53-4.208A.5.5 0 0 1 12 7.5h3.5a.5.5 0 0 1 0 1h-3.15l-1.88 5.17a.5.5 0 0 1-.94 0L6 3.964 4.47 8.171A.5.5 0 0 1 4 8.5H.5a.5.5 0 0 1 0-1h3.15l1.88-5.17A.5.5 0 0 1 6 2" />
              </svg>
              <h3 class="m-0">&nbsp;&nbsp;&nbsp;МатАнализ</h3>
            </div>
          </div>
          <div class="col-11 col-xl-10">
            <div class="accordion accordion-flush" id="faqOrder">
              <div class="accordion-item bg-transparent border-top border-bottom py-3">
                <h2 class="accordion-header" id="faqOrderHeading1">
                  <button class="accordion-button collapsed bg-transparent fw-bold shadow-none link-primary"
                    type="button" data-bs-toggle="collapse" data-bs-target="#faqOrderCollapse1" aria-expanded="false"
                    aria-controls="faqOrderCollapse1">
                    <p class="cv">Лекция 1</p>
                  </button>
                </h2>
                <div id="faqOrderCollapse1" class="accordion-collapse collapse" aria-labelledby="faqOrderHeading1">
                  <div class="accordion-body">
                    <a href="/files/матан/1.ppt">Презентация 1 лекции</a>
                  </div>
                </div>
              </div>
              <div class="accordion-item bg-transparent border-bottom py-3">
                <h2 class="accordion-header" id="faqOrderHeading2">
                  <button class="accordion-button collapsed bg-transparent fw-bold shadow-none link-primary"
                    type="button" data-bs-toggle="collapse" data-bs-target="#faqOrderCollapse2" aria-expanded="false"
                    aria-controls="faqOrderCollapse2">
                    <p class="cv">Лекция 2</p>
                  </button>
                </h2>
                <div id="faqOrderCollapse2" class="accordion-collapse collapse" aria-labelledby="faqOrderHeading2">
                  <div class="accordion-body">
                    <a href="/files/матан/2.pdf">Презентация 2 лекции</a>
                  </div>
                </div>
              </div>
              <div class="accordion-item bg-transparent border-bottom py-3">
                <h2 class="accordion-header" id="faqOrderHeading3">
                  <button class="accordion-button collapsed bg-transparent fw-bold shadow-none link-primary"
                    type="button" data-bs-toggle="collapse" data-bs-target="#faqOrderCollapse3" aria-expanded="false"
                    aria-controls="faqOrderCollapse3">
                    <p class="cv">Лекция 3</p>
                  </button>
                </h2>
                <div id="faqOrderCollapse3" class="accordion-collapse collapse" aria-labelledby="faqOrderHeading3">
                  <div class="accordion-body">
                    <a href="/files/матан/3.pdf">Презентация 3 лекции</a>
                  </div>
                </div>
              </div>
              <div class="accordion-item bg-transparent border-bottom py-3">
                <h2 class="accordion-header" id="faqOrderHeading4">
                  <button class="accordion-button collapsed bg-transparent fw-bold shadow-none link-primary"
                    type="button" data-bs-toggle="collapse" data-bs-target="#faqOrderCollapse4" aria-expanded="false"
                    aria-controls="faqOrderCollapse4">
                    <p class="cv">Лекция 4</p>
                  </button>
                </h2>
                <div id="faqOrderCollapse4" class="accordion-collapse collapse" aria-labelledby="faqOrderHeading4">
                  <div class="accordion-body">
                    <a href="/files/матан/4.pdf">Презентация 4 лекции</a>
                  </div>
                </div>
              </div>
              <div class="accordion-item bg-transparent border-bottom py-3">
                <h2 class="accordion-header" id="faqOrderHeading5">
                  <button class="accordion-button collapsed bg-transparent fw-bold shadow-none link-primary"
                    type="button" data-bs-toggle="collapse" data-bs-target="#faqOrderCollapse5" aria-expanded="false"
                    aria-controls="faqOrderCollapse5">
                    <p class="cv">Лекция 5</p>
                  </button>
                </h2>
                <div id="faqOrderCollapse5" class="accordion-collapse collapse" aria-labelledby="faqOrderHeading5">
                  <div class="accordion-body">
                    <a href="/files/матан/4.pdf">Презентация 5 лекции</a>
                  </div>
                </div>
              </div>
              <div class="accordion-item bg-transparent border-bottom py-3">
                <h2 class="accordion-header" id="faqOrderHeading6">
                  <button class="accordion-button collapsed bg-transparent fw-bold shadow-none link-primary"
                    type="button" data-bs-toggle="collapse" data-bs-target="#faqOrderCollapse6" aria-expanded="false"
                    aria-controls="faqOrderCollapse6">
                    <p class="cv">Лекция 6</p>
                  </button>
                </h2>
                <div id="faqOrderCollapse6" class="accordion-collapse collapse" aria-labelledby="faqOrderHeading6">
                  <div class="accordion-body">
                    <a href="/files/матан/6.pdf">Презентация 6 лекции</a>
                  </div>
                </div>
              </div>
              <div class="accordion-item bg-transparent border-bottom py-3">
                <h2 class="accordion-header" id="faqOrderHeading7">
                  <button class="accordion-button collapsed bg-transparent fw-bold shadow-none link-primary"
                    type="button" data-bs-toggle="collapse" data-bs-target="#faqOrderCollapse7" aria-expanded="false"
                    aria-controls="faqOrderCollapse7">
                    <p class="cv">Лекция 7</p>
                  </button>
                </h2>
                <div id="faqOrderCollapse7" class="accordion-collapse collapse" aria-labelledby="faqOrderHeading7">
                  <div class="accordion-body">
                    <img src="/img/матан/1.jpg">
                    <img src="/img/матан/2.jpg">
                    <img src="/img/матан/3.jpg">
                    <img src="/img/матан/4.jpg">
                    <img src="/img/матан/5.jpg">
                    <img src="/img/матан/6.jpg">
                    <img src="/img/матан/7.jpg">
                    <img src="/img/матан/8.jpg">
                    <img src="/img/матан/9.jpg">
                    <img src="/img/матан/10.jpg">
                    <img src="/img/матан/11.jpg">
                    <img src="/img/матан/12.jpg">
                    <img src="/img/матан/13.jpg">
                    <img src="/img/матан/14.jpg">
                    <img src="/img/матан/15.jpg">
                    <img src="/img/матан/16.jpg">
                    <img src="/img/матан/17.jpg">
                    <img src="/img/матан/18.jpg">
                    <img src="/img/матан/19.jpg">
                  </div>
                  </div>
                </div>
              </div>
              <div class="accordion-item bg-transparent border-bottom py-3">
                <h2 class="accordion-header" id="faqOrderHeading8">
                  <button class="accordion-button collapsed bg-transparent fw-bold shadow-none link-primary"
                    type="button" data-bs-toggle="collapse" data-bs-target="#faqOrderCollapse8" aria-expanded="false"
                    aria-controls="faqOrderCollapse8">
                    <p class="cv">Лекция 8</p>
                  </button>
                </h2>
                <div id="faqOrderCollapse8" class="accordion-collapse collapse" aria-labelledby="faqOrderHeading8">
                  <div class="accordion-body">
                    <img src="/img/матан/20.jpg">
                    <img src="/img/матан/21.jpg">
                    <img src="/img/матан/22.jpg">
                    <img src="/img/матан/23.jpg">
                    <img src="/img/матан/24.jpg">
                    <img src="/img/матан/25.jpg">
                    <img src="/img/матан/26.jpg">
                    <img src="/img/матан/27.jpg">
                    <img src="/img/матан/28.jpg">
                    <img src="/img/матан/29.jpg">
                    <img src="/img/матан/30.jpg">
                    <img src="/img/матан/31.jpg">
                    <img src="/img/матан/32.jpg">
                    <img src="/img/матан/33.jpg">
                    <img src="/img/матан/34.jpg">
                    <img src="/img/матан/35.jpg">
                    <img src="/img/матан/36.jpg">
                    <img src="/img/матан/37.jpg">
                    <img src="/img/матан/38.jpg">
                    <img src="/img/матан/39.jpg">
                    <img src="/img/матан/40.jpg">
                    <img src="/img/матан/41.jpg">
                    <img src="/img/матан/42.jpg">
                    <img src="/img/матан/43.jpg">
                    <img src="/img/матан/44.jpg">
                    <img src="/img/матан/45.jpg">
                    <img src="/img/матан/46.jpg">
                    <img src="/img/матан/47.jpg">
                    <img src="/img/матан/48.jpg">
                  </div>
                </div>
              </div>
              <div class="accordion-item bg-transparent border-bottom py-3">
                <h2 class="accordion-header" id="faqOrderHeading9">
                  <button class="accordion-button collapsed bg-transparent fw-bold shadow-none link-primary"
                    type="button" data-bs-toggle="collapse" data-bs-target="#faqOrderCollapse9" aria-expanded="false"
                    aria-controls="faqOrderCollapse9">
                    <p class="cv">Лекция 9</p>
                  </button>
                </h2>
                <div id="faqOrderCollapse9" class="accordion-collapse collapse" aria-labelledby="faqOrderHeading9">
                  <div class="accordion-body">
                    <img src="/img/матан/49.jpg">
                    <img src="/img/матан/50.jpg">
                    <img src="/img/матан/51.jpg">
                    <img src="/img/матан/52.jpg">
                    <img src="/img/матан/53.jpg">
                    <img src="/img/матан/54.jpg">
                    <img src="/img/матан/55.jpg">
                    <img src="/img/матан/56.jpg">
                    <img src="/img/матан/57.jpg">
                    <img src="/img/матан/58.jpg">
                    <img src="/img/матан/59.jpg">
                    <img src="/img/матан/60.jpg">
                    <img src="/img/матан/61.jpg">
                    <img src="/img/матан/62.jpg">
                    <img src="/img/матан/63.jpg">
                    <img src="/img/матан/64.jpg">
                    <img src="/img/матан/65.jpg">
                    <img src="/img/матан/66.jpg">
                    <img src="/img/матан/67.jpg">
                    <img src="/img/матан/68.jpg">
                    <img src="/img/матан/69.jpg">
                    <img src="/img/матан/70.jpg">
                    <img src="/img/матан/71.jpg">
                    <img src="/img/матан/72.jpg">
                    <img src="/img/матан/73.jpg">
                    <img src="/img/матан/74.jpg">
                    <img src="/img/матан/75.jpg">
                    <img src="/img/матан/76.jpg">
                    <img src="/img/матан/77.jpg">
                    <img src="/img/матан/78.jpg">
                    <img src="/img/матан/79.jpg">
                    <img src="/img/матан/80.jpg">
                    <img src="/img/матан/81.jpg">
                    <img src="/img/матан/82.jpg">
                    <img src="/img/матан/83.jpg">
                    <img src="/img/матан/84.jpg">
                    <img src="/img/матан/85.jpg">
                    <img src="/img/матан/86.jpg">
                    <img src="/img/матан/87.jpg">
                    <img src="/img/матан/88.jpg">
                    <img src="/img/матан/89.jpg">
                    <img src="/img/матан/90.jpg">
                    <img src="/img/матан/91.jpg">
                    <img src="/img/матан/92.jpg">
                    <img src="/img/матан/93.jpg">
                    <img src="/img/матан/94.jpg">
                    <img src="/img/матан/95.jpg">
                    <img src="/img/матан/96.jpg">
                    <img src="/img/матан/97.jpg">
                    <img src="/img/матан/98.jpg">
                    <img src="/img/матан/99.jpg">
                    <img src="/img/матан/100.jpg">
                    <img src="/img/матан/101.jpg">
                    <img src="/img/матан/102.jpg">
                    <img src="/img/матан/103.jpg">
                    <img src="/img/матан/104.jpg">
                    <img src="/img/матан/105.jpg">
                  </div>
                </div>
              </div>
              <div class="accordion-item bg-transparent border-bottom py-3">
                <h2 class="accordion-header" id="faqOrderHeading10">
                  <button class="accordion-button collapsed bg-transparent fw-bold shadow-none link-primary"
                    type="button" data-bs-toggle="collapse" data-bs-target="#faqOrderCollapse10" aria-expanded="false"
                    aria-controls="faqOrderCollapse10">
                    <p class="cv">Лекция 10</p>
                  </button>
                </h2>
                <div id="faqOrderCollapse10" class="accordion-collapse collapse" aria-labelledby="faqOrderHeading10">
                  <div class="accordion-body">
                    <img src="/img/матан/106.jpg">
                    <img src="/img/матан/107.jpg">
                    <img src="/img/матан/108.jpg">
                    <img src="/img/матан/109.jpg">
                    <img src="/img/матан/110.jpg">
                    <img src="/img/матан/111.jpg">
                    <img src="/img/матан/112.jpg">
                    <img src="/img/матан/113.jpg">
                    <img src="/img/матан/114.jpg">
                    <img src="/img/матан/115.jpg">
                    <img src="/img/матан/116.jpg">
                    <img src="/img/матан/117.jpg">
                    <img src="/img/матан/118.jpg">
                    <img src="/img/матан/119.jpg">
                    <img src="/img/матан/120.jpg">
                    <img src="/img/матан/121.jpg">
                    <img src="/img/матан/122.jpg">
                    <img src="/img/матан/123.jpg">
                    <img src="/img/матан/124.jpg">
                    <img src="/img/матан/125.jpg">
                    <img src="/img/матан/126.jpg">
                    <img src="/img/матан/127.jpg">
                    <img src="/img/матан/128.jpg">
                    <img src="/img/матан/129.jpg">
                    <img src="/img/матан/130.jpg">
                    <img src="/img/матан/131.jpg">
                    <img src="/img/матан/132.jpg">
                    <img src="/img/матан/133.jpg">
                    <img src="/img/матан/134.jpg">
                  </div>
                </div>
              </div>
              <div class="accordion-item bg-transparent border-bottom py-3">
                <h2 class="accordion-header" id="faqRefundHeading11">
                  <button class="accordion-button collapsed bg-transparent fw-bold shadow-none link-primary"
                    type="button" data-bs-toggle="collapse" data-bs-target="#faqRefundCollapse11" aria-expanded="false"
                    aria-controls="faqRefundCollapse11">
                    <p class="cv">Лекция 11</p>
                  </button>
                </h2>
                <div id="faqRefundCollapse11" class="accordion-collapse collapse" aria-labelledby="faqRefundHeading11">
                  <div class="accordion-body">
                    <img src="/img/матан/135.jpg">
                    <img src="/img/матан/136.jpg">
                    <img src="/img/матан/137.jpg">
                    <img src="/img/матан/138.jpg">
                    <img src="/img/матан/139.jpg">
                    <img src="/img/матан/140.jpg">
                    <img src="/img/матан/141.jpg">
                    <img src="/img/матан/142.jpg">
                    <img src="/img/матан/143.jpg">
                    <img src="/img/матан/144.jpg">
                    <img src="/img/матан/145.jpg">
                    <img src="/img/матан/146.jpg">
                    <img src="/img/матан/147.jpg">
                    <img src="/img/матан/148.jpg">
                    <img src="/img/матан/149.jpg">
                    <img src="/img/матан/150.jpg">
                    <img src="/img/матан/151.jpg">
                    <img src="/img/матан/152.jpg">
                    <img src="/img/матан/153.jpg">
                    <img src="/img/матан/154.jpg">
                    <img src="/img/матан/155.jpg">
                  </div>
                </div>
              </div>
              <div class="accordion-item bg-transparent border-bottom py-3">
                <h2 class="accordion-header" id="faqRefundHeading12">
                  <button class="accordion-button collapsed bg-transparent fw-bold shadow-none link-primary"
                    type="button" data-bs-toggle="collapse" data-bs-target="#faqRefundCollapse12" aria-expanded="false"
                    aria-controls="faqRefundCollapse12">
                    <p class="cv">Лекция 12</p>
                  </button>
                </h2>
                <div id="faqRefundCollapse12" class="accordion-collapse collapse" aria-labelledby="faqRefundHeading12">
                  <div class="accordion-body">
                    <a href="/files/матан/12.pdf">Презентация 12 лекции</a>
                  </div>
                </div>
              </div>
              <div class="accordion-item bg-transparent border-bottom py-3">
                <h2 class="accordion-header" id="faqRefundHeading13">
                  <button class="accordion-button collapsed bg-transparent fw-bold shadow-none link-primary"
                    type="button" data-bs-toggle="collapse" data-bs-target="#faqRefundCollapse13" aria-expanded="false"
                    aria-controls="faqRefundCollapse13">
                    <p class="cv">Лекция 13</p>
                  </button>
                </h2>
                <div id="faqRefundCollapse13" class="accordion-collapse collapse" aria-labelledby="faqRefundHeading13">
                  <div class="accordion-body">
                    <a href="/files/матан/13.pdf">Презентация 13 лекции</a>
                  </div>
                </div>
              </div>
              <div class="accordion-item bg-transparent border-bottom py-3">
                <h2 class="accordion-header" id="faqRefundHeading14">
                  <button class="accordion-button collapsed bg-transparent fw-bold shadow-none link-primary"
                    type="button" data-bs-toggle="collapse" data-bs-target="#faqRefundCollapse14" aria-expanded="false"
                    aria-controls="faqRefundCollapse14">
                    <p class="cv">Лекция 14</p>
                  </button>
                </h2>
                <div id="faqRefundCollapse14" class="accordion-collapse collapse" aria-labelledby="faqRefundHeading14">
                  <div class="accordion-body">
                    <a href="/files/матан/14.pdf">Презентация 14 лекции</a>
                  </div>
                </div>
              </div>
              <div class="accordion-item bg-transparent border-bottom py-3">
                <h2 class="accordion-header" id="faqRefundHeading15">
                  <button class="accordion-button collapsed bg-transparent fw-bold shadow-none link-primary"
                    type="button" data-bs-toggle="collapse" data-bs-target="#faqRefundCollapse15" aria-expanded="false"
                    aria-controls="faqRefundCollapse15">
                    <p class="cv">Лекция 15</p>
                  </button>
                </h2>
                <div id="faqRefundCollapse15" class="accordion-collapse collapse" aria-labelledby="faqRefundHeading15">
                  <div class="accordion-body">
                    <a href="/files/матан/15.pdf">Презентация 15 лекции</a>
                  </div>
                </div>
              </div>
              <div class="accordion-item bg-transparent border-bottom py-3">
                <h2 class="accordion-header" id="faqRefundHeading16">
                  <button class="accordion-button collapsed bg-transparent fw-bold shadow-none link-primary"
                    type="button" data-bs-toggle="collapse" data-bs-target="#faqRefundCollapse16" aria-expanded="false"
                    aria-controls="faqRefundCollapse16">
                    <p class="cv">Лекция 16</p>
                  </button>
                </h2>
                <div id="faqRefundCollapse16" class="accordion-collapse collapse" aria-labelledby="faqRefundHeading16">
                  <div class="accordion-body">
                    <a href="/files/матан/16.pdf">Презентация 16 лекции</a>
                  </div>
                </div>
              </div>
              <div class="accordion-item bg-transparent border-bottom py-3">
                <h2 class="accordion-header" id="faqRefundHeading17">
                  <button class="accordion-button collapsed bg-transparent fw-bold shadow-none link-primary"
                    type="button" data-bs-toggle="collapse" data-bs-target="#faqRefundCollapse17" aria-expanded="false"
                    aria-controls="faqRefundCollapse17">
                    <p class="cv">Лекция 17</p>
                  </button>
                </h2>
                <div id="faqRefundCollapse17" class="accordion-collapse collapse" aria-labelledby="faqRefundHeading17">
                  <div class="accordion-body">
                    <p>Временно отсутствует.</p>
                  </div>
                </div>
              </div>
              <div class="accordion-item bg-transparent border-bottom py-3">
                <h2 class="accordion-header" id="faqRefundHeading18">
                  <button class="accordion-button collapsed bg-transparent fw-bold shadow-none link-primary"
                    type="button" data-bs-toggle="collapse" data-bs-target="#faqRefundCollapse18" aria-expanded="false"
                    aria-controls="faqRefundCollapse18">
                    <p class="cv">Лекция 18</p>
                  </button>
                </h2>
                <div id="faqRefundCollapse18" class="accordion-collapse collapse" aria-labelledby="faqRefundHeading18">
                  <div class="accordion-body">
                    <p>Временно отсутствует.</p>
                  </div>
                </div>
              </div>
              <div class="accordion-item bg-transparent border-bottom py-3">
                <h2 class="accordion-header" id="faqRefundHeading19">
                  <button class="accordion-button collapsed bg-transparent fw-bold shadow-none link-primary"
                    type="button" data-bs-toggle="collapse" data-bs-target="#faqRefundCollapse19" aria-expanded="false"
                    aria-controls="faqRefundCollapse19">
                    <p class="cv">Лекция 19</p>
                  </button>
                </h2>
                <div id="faqRefundCollapse19" class="accordion-collapse collapse" aria-labelledby="faqRefundHeading19">
                  <div class="accordion-body">
                    <img src="/img/матан/156.jpg">
                    <img src="/img/матан/157.jpg">
                    <img src="/img/матан/158.jpg">
                    <img src="/img/матан/159.jpg">
                    <img src="/img/матан/160.jpg">
                    <img src="/img/матан/161.jpg">
                    <img src="/img/матан/162.jpg">
                    <img src="/img/матан/163.jpg">
                    <img src="/img/матан/164.jpg">
                    <img src="/img/матан/165.jpg">
                    <img src="/img/матан/166.jpg">
                    <img src="/img/матан/167.jpg">
                    <img src="/img/матан/168.jpg">
                    <img src="/img/матан/169.jpg">
                    <img src="/img/матан/170.jpg">
                    <img src="/img/матан/171.jpg">
                    <img src="/img/матан/172.jpg">
                    <img src="/img/матан/173.jpg">
                    <img src="/img/матан/174.jpg">
                    <img src="/img/матан/175.jpg">
                    <img src="/img/матан/176.jpg">
                    <img src="/img/матан/177.jpg">
                    <img src="/img/матан/178.jpg">
                    <img src="/img/матан/179.jpg">
                    <img src="/img/матан/180.jpg">
                    <img src="/img/матан/181.jpg">
                    <img src="/img/матан/182.jpg">
                    <img src="/img/матан/183.jpg">
                    <img src="/img/матан/184.jpg">
                    <img src="/img/матан/185.jpg">
                    <img src="/img/матан/186.jpg">
                    <img src="/img/матан/187.jpg">
                    <img src="/img/матан/188.jpg">
                    <img src="/img/матан/189.jpg">
                    <img src="/img/матан/190.jpg">
                    <img src="/img/матан/191.jpg">
                    <img src="/img/матан/192.jpg">
                    <img src="/img/матан/193.jpg">
                    <img src="/img/матан/194.jpg">
                    <img src="/img/матан/195.jpg">
                    <img src="/img/матан/196.jpg">
                    <img src="/img/матан/197.jpg">
                    <img src="/img/матан/198.jpg">
                    <img src="/img/матан/199.jpg">
                    <img src="/img/матан/200.jpg">
                    <img src="/img/матан/201.jpg">
                    <img src="/img/матан/202.jpg">
                    <img src="/img/матан/203.jpg">
                    <img src="/img/матан/204.jpg">
                    <img src="/img/матан/205.jpg">
                    <img src="/img/матан/206.jpg">
                    <img src="/img/матан/207.jpg">
                    <img src="/img/матан/208.jpg">
                    <img src="/img/матан/209.jpg">
                    <img src="/img/матан/210.jpg">
                    <img src="/img/матан/211.jpg">
                    <img src="/img/матан/212.jpg">
                    <img src="/img/матан/213.jpg">
                    <img src="/img/матан/214.jpg">
                    <img src="/img/матан/215.jpg">
                    <img src="/img/матан/216.jpg">
                  </div>
                </div>
              </div>
              <div class="accordion-item bg-transparent border-bottom py-3">
                <h2 class="accordion-header" id="faqRefundHeading20">
                  <button class="accordion-button collapsed bg-transparent fw-bold shadow-none link-primary"
                    type="button" data-bs-toggle="collapse" data-bs-target="#faqRefundCollapse20" aria-expanded="false"
                    aria-controls="faqRefundCollapse20">
                    <p class="cv">Лекция 20</p>
                  </button>
                </h2>
                <div id="faqRefundCollapse20" class="accordion-collapse collapse" aria-labelledby="faqRefundHeading20">
                  <div class="accordion-body">
                    <img src="/img/матан/217.jpg">
                    <img src="/img/матан/218.jpg">
                    <img src="/img/матан/219.jpg">
                    <img src="/img/матан/220.jpg">
                    <img src="/img/матан/221.jpg">
                    <img src="/img/матан/222.jpg">
                    <img src="/img/матан/223.jpg">
                    <img src="/img/матан/224.jpg">
                    <img src="/img/матан/225.jpg">
                    <img src="/img/матан/226.jpg">
                    <img src="/img/матан/227.jpg">
                    <img src="/img/матан/228.jpg">
                    <img src="/img/матан/229.jpg">
                    <img src="/img/матан/230.jpg">
                    <img src="/img/матан/231.jpg">
                    <img src="/img/матан/232.jpg">
                    <img src="/img/матан/233.jpg">
                    <img src="/img/матан/234.jpg">
                    <img src="/img/матан/235.jpg">
                    <img src="/img/матан/236.jpg">
                    <img src="/img/матан/237.jpg">
                    <img src="/img/матан/238.jpg">
                    <img src="/img/матан/239.jpg">
                  </div>
                </div>
              </div>
              <div class="accordion-item bg-transparent border-bottom py-3">
                <h2 class="accordion-header" id="faqRefundHeading21">
                  <button class="accordion-button collapsed bg-transparent fw-bold shadow-none link-primary"
                    type="button" data-bs-toggle="collapse" data-bs-target="#faqRefundCollapse21" aria-expanded="false"
                    aria-controls="faqRefundCollapse21">
                    <p class="cv">Лекция 21</p>
                  </button>
                </h2>
                <div id="faqRefundCollapse21" class="accordion-collapse collapse" aria-labelledby="faqRefundHeading21">
                  <div class="accordion-body">
                    <img src="/img/матан/240.jpg">
                    <img src="/img/матан/241.jpg">
                    <img src="/img/матан/242.jpg">
                    <img src="/img/матан/243.jpg">
                    <img src="/img/матан/244.jpg">
                    <img src="/img/матан/245.jpg">
                    <img src="/img/матан/246.jpg">
                    <img src="/img/матан/247.jpg">
                    <img src="/img/матан/248.jpg">
                    <img src="/img/матан/249.jpg">
                    <img src="/img/матан/250.jpg">
                    <img src="/img/матан/251.jpg">
                    <img src="/img/матан/252.jpg">
                    <img src="/img/матан/253.jpg">
                    <img src="/img/матан/254.jpg">
                    <img src="/img/матан/255.jpg">
                    <img src="/img/матан/256.jpg">
                    <img src="/img/матан/257.jpg">
                    <img src="/img/матан/258.jpg">
                    <img src="/img/матан/259.jpg">
                    <img src="/img/матан/260.jpg">
                    <img src="/img/матан/261.jpg">
                    <img src="/img/матан/262.jpg">
                    <img src="/img/матан/263.jpg">
                    <img src="/img/матан/264.jpg">
                    <img src="/img/матан/265.jpg">
                  </div>
                </div>
              </div>
            </div>
          </div>
        </div>
      </div>
    </div>
  </section>
                `
            },
            {
                id: 'pin',
                fileName: 'pin.html',
                title: 'Материалы',
                // ВСТАВЬТЕ ТОЛЬКО СОДЕРЖИМОЕ ВНУТРИ BODY - БЕЗ <html>, <head>, <body>
                content: `
                    <div class="navb" id="navb">
    <div class="row">
      <div class="col-1">
    <a href="/"><img class="ml" id="ml" src="l.png" width="90px"
        style="position: relative;top:-10px"></a>
      </div>
      <div class="col-7" id="si">
        <div id="search-interface1">
                <div class="search-box1">
                  <input type="text" id="search-input1" placeholder="Поиск 🔍">
                  <button id="search-button1" style="display: none;">Найти</button>
                </div>

                <div id="search-results1">
                  <div id="results-container1"></div>
                </div>
              </div>
      </div>
      <div class="col-2">
    <a onclick="openMenu()"><svg xmlns="http://www.w3.org/2000/svg" width="35" height="35" fill="currentColor" class="bi bi-columns-gap" viewBox="0 0 16 16">
  <path d="M6 1v3H1V1zM1 0a1 1 0 0 0-1 1v3a1 1 0 0 0 1 1h5a1 1 0 0 0 1-1V1a1 1 0 0 0-1-1zm14 12v3h-5v-3zm-5-1a1 1 0 0 0-1 1v3a1 1 0 0 0 1 1h5a1 1 0 0 0 1-1v-3a1 1 0 0 0-1-1zM6 8v7H1V8zM1 7a1 1 0 0 0-1 1v7a1 1 0 0 0 1 1h5a1 1 0 0 0 1-1V8a1 1 0 0 0-1-1zm14-6v7h-5V1zm-5-1a1 1 0 0 0-1 1v7a1 1 0 0 0 1 1h5a1 1 0 0 0 1-1V1a1 1 0 0 0-1-1z"/>
</svg><p> Меню</p></a></div>
    <div class="col-1"><div class="ds">
      <label id="switch" class="switch">
        <input type="checkbox" onchange="toggleTheme()" id="slider">
        <span class="slider round"></span>
      </label>
    </div>
    </div>
    </div>
  </div>
      <div id="menu" class="menu">
      <div class="menu-content">

        <div class="container">
          <div class="row" style="margin-bottom: -1.5%;">
            <div class="col-md-10">
              <div class="time-widget">
                <div class="time" id="time"></div>
                <div class="date" id="date"></div>
                <div class="week" id="week"></div>
                <div class="date" id="datek"></div>
                <div class="week" id="weekk"></div>
              </div>
              <script>
                // Обновление каждую секунду
                setInterval(updateWidget, 1000);
                // Первоначальный запуск
                updateWidget();
              </script>
            </div>
            <div class="row">
              <div class="col-1">
                <a href="/"><img class="ml" id="ml" src="l.png" width="140px" style="position: relative;top:-10px"></a>
              </div>
              <div class="col-11">
                <div id="search-interface">
                  <div class="search-box">
                    <input type="text" id="search-input" placeholder="Поиск 🔍">
                    <button id="search-button" style="display: none;">Найти</button>
                  </div>
                  <div id="search-results">
                    <div id="results-container"></div>
                  </div>
                </div>
              </div>
              <div class="col-1">
                <span class="close" onclick="closeMenu()">&times;</span>
              </div>
            </div>

          </div>
          <div class="row">
            <div class="col">
              <h3 align="center"><svg xmlns="http://www.w3.org/2000/svg" width="20" height="20" fill="currentColor"
                  class="bi bi-house" viewBox="0 0 16 16">
                  <path
                    d="M8.707 1.5a1 1 0 0 0-1.414 0L.646 8.146a.5.5 0 0 0 .708.708L2 8.207V13.5A1.5 1.5 0 0 0 3.5 15h9a1.5 1.5 0 0 0 1.5-1.5V8.207l.646.647a.5.5 0 0 0 .708-.708L13 5.793V2.5a.5.5 0 0 0-.5-.5h-1a.5.5 0 0 0-.5.5v1.293zM13 7.207V13.5a.5.5 0 0 1-.5.5h-9a.5.5 0 0 1-.5-.5V7.207l5-5z" />
                </svg> Меню</h3>
              <ul class="men">
                <li><a href="/"><span>Главная</span></a></li>
                <li><a href="/lec.html"><span>Лекции</span></a></li>
                <li><a href="/pr.html"><span>Практики</span></a></li>
                <li><a href="/soft.html"><span>ПО</span></a></li>
                <li><a href="/pin.html"><span>Материалы</span></a></li>
                <li><a href="/books.html"><span>Учебники</span></a></li>
                <li><a href="/ave.apk"><span>APK</span></a></li>
              </ul>
              <h3 align="center"><svg xmlns="http://www.w3.org/2000/svg" width="20" height="20" fill="currentColor"
                  class="bi bi-compass" viewBox="0 0 16 16">
                  <path
                    d="M8 16.016a7.5 7.5 0 0 0 1.962-14.74A1 1 0 0 0 9 0H7a1 1 0 0 0-.962 1.276A7.5 7.5 0 0 0 8 16.016m6.5-7.5a6.5 6.5 0 1 1-13 0 6.5 6.5 0 0 1 13 0" />
                  <path d="m6.94 7.44 4.95-2.83-2.83 4.95-4.949 2.83 2.828-4.95z" />
                </svg> Конспекты</h3>
              <ul class="men">
                <li><a href="/lec.html#linal"><span>ЛинАл</span></a></li>
                <li><a href="/lec.html#olkk"><span>ОЛКК</span></a></li>
                <li><a href="/lec.html#istoria"><span>История</span></a></li>
                <li><a href="/lec.html#matan"><span>МатАнализ</span></a></li>
              </ul>
            </div>
            <div class="col">
              <h3 align="center"><svg xmlns="http://www.w3.org/2000/svg" width="20" height="20" fill="currentColor"
                  class="bi bi-people" viewBox="0 0 16 16">
                  <path
                    d="M15 14s1 0 1-1-1-4-5-4-5 3-5 4 1 1 1 1zm-7.978-1L7 12.996c.001-.264.167-1.03.76-1.72C8.312 10.629 9.282 10 11 10c1.717 0 2.687.63 3.24 1.276.593.69.758 1.457.76 1.72l-.008.002-.014.002zM11 7a2 2 0 1 0 0-4 2 2 0 0 0 0 4m3-2a3 3 0 1 1-6 0 3 3 0 0 1 6 0M6.936 9.28a6 6 0 0 0-1.23-.247A7 7 0 0 0 5 9c-4 0-5 3-5 4q0 1 1 1h4.216A2.24 2.24 0 0 1 5 13c0-1.01.377-2.042 1.09-2.904.243-.294.526-.569.846-.816M4.92 10A5.5 5.5 0 0 0 4 13H1c0-.26.164-1.03.76-1.724.545-.636 1.492-1.256 3.16-1.275ZM1.5 5.5a3 3 0 1 1 6 0 3 3 0 0 1-6 0m3-2a2 2 0 1 0 0 4 2 2 0 0 0 0-4" />
                </svg> Группы</h3>
              <ul class="men">
                <li><a href="#"><span>АБ-520</span></a></li>
                <li><a href="#"><span>АБ-521</span></a></li>
                <li><a href="#"><span>АБ-522</span></a></li>
                <li><a href="#"><span>АБ-523</span></a></li>
                <li><a href="#"><span>АБс-524</span></a></li>
                <li><a href="#"><span>АБс-525</span></a></li>
                <li><a href="#"><span>АБс-526</span></a></li>
                <li><a href="#"><span>АБс-527</span></a></li>
                <li><a href="#"><span>АИ-52</span></a></li>
              </ul>
            </div>
            <div class="col">
              <h3 align="center"><svg xmlns="http://www.w3.org/2000/svg" width="20" height="20" fill="currentColor"
                  class="bi bi-rocket-takeoff" viewBox="0 0 16 16">
                  <path
                    d="M9.752 6.193c.599.6 1.73.437 2.528-.362s.96-1.932.362-2.531c-.599-.6-1.73-.438-2.528.361-.798.8-.96 1.933-.362 2.532" />
                  <path
                    d="M15.811 3.312c-.363 1.534-1.334 3.626-3.64 6.218l-.24 2.408a2.56 2.56 0 0 1-.732 1.526L8.817 15.85a.51.51 0 0 1-.867-.434l.27-1.899c.04-.28-.013-.593-.131-.956a9 9 0 0 0-.249-.657l-.082-.202c-.815-.197-1.578-.662-2.191-1.277-.614-.615-1.079-1.379-1.275-2.195l-.203-.083a10 10 0 0 0-.655-.248c-.363-.119-.675-.172-.955-.132l-1.896.27A.51.51 0 0 1 .15 7.17l2.382-2.386c.41-.41.947-.67 1.524-.734h.006l2.4-.238C9.005 1.55 11.087.582 12.623.208c.89-.217 1.59-.232 2.08-.188.244.023.435.06.57.093q.1.026.16.045c.184.06.279.13.351.295l.029.073a3.5 3.5 0 0 1 .157.721c.055.485.051 1.178-.159 2.065m-4.828 7.475.04-.04-.107 1.081a1.54 1.54 0 0 1-.44.913l-1.298 1.3.054-.38c.072-.506-.034-.993-.172-1.418a9 9 0 0 0-.164-.45c.738-.065 1.462-.38 2.087-1.006M5.205 5c-.625.626-.94 1.351-1.004 2.09a9 9 0 0 0-.45-.164c-.424-.138-.91-.244-1.416-.172l-.38.054 1.3-1.3c.245-.246.566-.401.91-.44l1.08-.107zm9.406-3.961c-.38-.034-.967-.027-1.746.163-1.558.38-3.917 1.496-6.937 4.521-.62.62-.799 1.34-.687 2.051.107.676.483 1.362 1.048 1.928.564.565 1.25.941 1.924 1.049.71.112 1.429-.067 2.048-.688 3.079-3.083 4.192-5.444 4.556-6.987.183-.771.18-1.345.138-1.713a3 3 0 0 0-.045-.283 3 3 0 0 0-.3-.041Z" />
                  <path
                    d="M7.009 12.139a7.6 7.6 0 0 1-1.804-1.352A7.6 7.6 0 0 1 3.794 8.86c-1.102.992-1.965 5.054-1.839 5.18.125.126 3.936-.896 5.054-1.902Z" />
                </svg> Ресурсы</h3>
              <ul class="men">
                <li><a href="https://www.nstu.ru/"><span>НГТУ</span></a></li>
                <li><a href="https://ciu.nstu.ru/student_study"><span>ЛК НГТУ</span></a></li>
                <li><a href="https://dispace.edu.nstu.ru/"><span>DiSpace</span></a></li>
                <li><a href="https://www.rustore.ru/catalog/app/com.yourneti"><span>YourNETI</span></a></li>
                <li><a href="https://avtf.nstu.ru/"><span>АВТФ</span></a></li>
                <li><a href="/cprog/"><span>cprog</span></a></li>
                <li><a href="https://chat.deepseek.com/"><span>DeepSeek</span></a></li>
                <li><a href="https://chat.qwen.ai/"><span>Qwen</span></a></li>
                <li><a href="https://photomath.com"><span>PhotoMath</span></a></li>
              </ul>
            </div>
          </div>
        </div>
      </div>
    </div>
  <a href="#" ><div class="bt"><p style="text-decoration: none;">^</p></div></a>
  <div class="container">
    <div class="row">
    <div class="col">
  <h1 class="wbn">Материалы для подготовки к очной смене Долины</h1>
  <h3>Зачем нужно готовиться к очной части?</h3>
  <p>Это нужно для того, чтобы практические задания на очной смене Долины тебе давались легко и в удовольствие. На очной
    части Долины мы будем работать в командах. Хорошая подготовка поможет тебе стать крутым участником команды.</p>
  <p>&nbsp;</p>
  <h3>Как нужно готовиться?</h3>
  <p>Мы рекомендуем прочитать все материалы и записать себе небольшой конспект, чтобы лучше запомнить самую важную
    информацию. Возьми конспект с собой на очную часть. Также мы попросим тебя ответить на несколько вопросов по
    изученным материалам в тесте на платформе. Пока читаешь материалы, записывай новую информацию, делай памятки.</p>
  <p>&nbsp;</p>
  <h3>Материалы по Linux</h3>
  <p><span>Изучи следующие статьи:</span></p>
  <ol>
    <li>
      <p><a href="https://www.opennet.ru/docs/RUS/zlp" rel="noopener noreferrer nofollow"
          target="_blank"><span>https://www.opennet.ru/docs/RUS/zlp</span></a><span
          style="font-family: Kaspersky Sans Display, Kaspersky Sans Display_EmbeddedFont, Kaspersky Sans Display_MSFontService, sans-serif;">&nbsp;</span>
      </p>
    </li>
    <li>
      <p><a href="https://habr.com/ru/articles/724762/" rel="noopener noreferrer nofollow"
          target="_blank"><span>https://habr.com/ru/articles/724762/</span></a><span
          style="font-family: Kaspersky Sans Display, Kaspersky Sans Display_EmbeddedFont, Kaspersky Sans Display_MSFontService, sans-serif;">&nbsp;</span>
      </p>
    </li>
  </ol>
  <p>&nbsp;</p>
  <h3><span>Гит, шифрование и разработка на С++</span></h3>
  <p>Изучи следующие статьи:</p>
  <ol>
    <li>
      <p><a href="https://learngitbranching.js.org/?locale=ru_RU" rel="noopener noreferrer nofollow"
          target="_blank"><span>https://learngitbranching.js.org/?locale=ru_RU</span></a></p>
    </li>
    <li>
      <p><a href="https://skills.github.com/" rel="noopener noreferrer nofollow"
          target="_blank"><span>https://skills.github.com/</span></a><span
          style="font-family: Calibri, Calibri_EmbeddedFont, Calibri_MSFontService, sans-serif;">&nbsp;</span></p>
    </li>
    <li>
      <p><span>Поразрядные операции - </span><a class="Hyperlink SCXW219795205 BCX8"
          href="https://www.geeksforgeeks.org/bitwise-operators-in-c-cpp/?ysclid=lw6c71z06i268216100"
          rel="noopener noreferrer nofollow" target="_blank"><span>Bitwise Operators in C -
            GeeksforGeeks</span></a><span
          style="font-family: Calibri, Calibri_EmbeddedFont, Calibri_MSFontService, sans-serif;">&nbsp;</span></p>
    </li>
    <li>
      <p><span>Работа с файлами - </span><a class="Hyperlink SCXW219795205 BCX8"
          href="https://www.geeksforgeeks.org/basics-file-handling-c/" rel="noopener noreferrer nofollow"
          target="_blank"><span>Basics of File Handling in C - GeeksforGeeks</span></a><span
          style="font-family: Calibri, Calibri_EmbeddedFont, Calibri_MSFontService, sans-serif;">&nbsp;</span></p>
    </li>
    <li>
      <p><span>Попробуй ещё реализовать xor шифрование&nbsp;</span><br /><a class="Hyperlink SCXW219795205 BCX8"
          href="https://en.wikipedia.org/wiki/XOR_cipher" rel="noopener noreferrer nofollow" target="_blank"><span>XOR
            cipher - Wikipedia</span></a><span>&nbsp;</span><br /><a class="Hyperlink SCXW219795205 BCX8"
          href="https://translated.turbopages.org/proxy_u/en-ru.ru.a0df45cc-664350be-351da66e-74722d776562/https/www.geeksforgeeks.org/xor-cipher/"
          rel="noopener noreferrer nofollow" target="_blank"><span>XOR Cipher - GeeksforGeeks (</span></a><a
          href="http://turbopages.org" rel="noopener noreferrer nofollow"
          target="_blank"><span>turbopages.org</span></a><a class="Hyperlink SCXW219795205 BCX8"
          href="https://translated.turbopages.org/proxy_u/en-ru.ru.a0df45cc-664350be-351da66e-74722d776562/https/www.geeksforgeeks.org/xor-cipher/"
          rel="noopener noreferrer nofollow" target="_blank"><span>)</span></a><span
          style="font-family: Calibri, Calibri_EmbeddedFont, Calibri_MSFontService, sans-serif;">&nbsp;</span></p>
    </li>
  </ol>
  <p>&nbsp;</p>
  <h3>Frontend-разработка</h3>
  <p>Ознакомься с этими материалами:</p>
  <ol>
    <li>
      <p><a href="https://youtu.be/tw_2DoADWEY?si=r4FNW1JXUozWr8N9" rel="noopener noreferrer nofollow"
          target="_blank"><span
            style="font-family: -apple-system, BlinkMacSystemFont, Segoe UI, system-ui, Apple Color Emoji, Segoe UI Emoji, Segoe UI Web, sans-serif;">https://youtu.be/tw_2DoADWEY?si=r4FNW1JXUozWr8N9</span></a><span
          style="font-family: -apple-system, BlinkMacSystemFont, Segoe UI, system-ui, Apple Color Emoji, Segoe UI Emoji, Segoe UI Web, sans-serif;">
          - про реализацию запроса на сервер</span></p>
    </li>
    <li>
      <p><a href="https://tproger.ru/translations/frontend-backend-interaction" rel="noopener noreferrer nofollow"
          target="_blank"><span
            style="font-family: -apple-system, BlinkMacSystemFont, Segoe UI, system-ui, Apple Color Emoji, Segoe UI Emoji, Segoe UI Web, sans-serif;">https://tproger.ru/translations/frontend-backend-interaction</span></a><span
          style="font-family: -apple-system, BlinkMacSystemFont, Segoe UI, system-ui, Apple Color Emoji, Segoe UI Emoji, Segoe UI Web, sans-serif;">
          - </span>простыми словами о &laquo;фронтенде&raquo; и &laquo;бэкенде&raquo;: что это такое и как они
        взаимодействуют</p>
    </li>
  </ol>
  <p>&nbsp;</p>
  <h3>Backend-разработка</h3>
  <p>Обязательно:</p>
  <ol>
    <li>
      <p><a href="https://stepik.org/course/54403/promo" rel="noopener noreferrer nofollow"
          target="_blank">https://stepik.org/course/54403/promo</a> &ndash; курс с базовым синтаксисом <strong>(можно
          пройти до последней главы)</strong></p>
    </li>
    <li>
      <p><a href="https://go.dev/tour/welcome/1" rel="noopener noreferrer nofollow"
          target="_blank">https://go.dev/tour/welcome/1</a> &ndash; тур по языку с интерактивной песочницей, от
        создателей языка, достаточно пройти до дженериков</p>
    </li>
  </ol>
  <p>Дополнительно:</p>
  <ol>
    <li>
      <p><a href="https://proselyte.net/tutorials/http-tutorial/introduction/" rel="noopener noreferrer nofollow"
          target="_blank">https://proselyte.net/tutorials/http-tutorial/introduction/</a> &ndash; про протокол http</p>
    </li>
    <li>
      <p><a href="https://habr.com/ru/articles/554274/" rel="noopener noreferrer nofollow"
          target="_blank">https://habr.com/ru/articles/554274/</a> &ndash; про формат данных JSON</p>
    </li>
    <li>
      <p><a href="https://learning.postman.com/docs/getting-started/overview/" rel="noopener noreferrer nofollow"
          target="_blank">https://learning.postman.com/docs/getting-started/overview/</a> &ndash; про работу с Postman
      </p>
    </li>
    <li>
      <p><a href="https://codex.so/go-web-server" rel="noopener noreferrer nofollow"
          target="_blank">https://codex.so/go-web-server</a> &ndash; пример простого веб-сервера на go</p>
    </li>
  </ol>
  <h3>Сети</h3>
  <ol>
    <li>
      <p>Курс молодого бойца по сетям <a
          href="https://www.youtube.com/watch?v=voGkaUXFw-I&amp;list=PLcDkQ2Au8aVNYsqGsxRQxYyQijILa94T9&amp;index=1"
          rel="noopener noreferrer nofollow" target="_blank">0.Видео уроки Cisco Packet Tracer. Курс молодого бойца.
          Введение (</a><a href="http://youtube.com" rel="noopener noreferrer nofollow"
          target="_blank">youtube.com</a><a
          href="https://www.youtube.com/watch?v=voGkaUXFw-I&amp;list=PLcDkQ2Au8aVNYsqGsxRQxYyQijILa94T9&amp;index=1"
          rel="noopener noreferrer nofollow" target="_blank">)</a>. Посмотри <strong>уроки с 0 по 10</strong></p>
    </li>
  </ol>
</div></div></div>
                `
            }/*,
            {
                id: 'contact',
                fileName: 'contact.html',
                title: 'Контакты',
                // ВСТАВЬТЕ ТОЛЬКО СОДЕРЖИМОЕ ВНУТРИ BODY - БЕЗ <html>, <head>, <body>
                content: `
                    <h1>Наши контакты</h1>
                    <p>Свяжитесь с нами любым удобным способом:</p>
                    <p><strong>Телефон:</strong> +7 (123) 456-78-90</p>
                    <p><strong>Email:</strong> info@example.com</p>
                    <p><strong>Адрес:</strong> г. Москва, ул. Примерная, д. 123</p>
                    <p><strong>Режим работы:</strong> Пн-Пт с 9:00 до 18:00</p>
                    <p>Мы всегда рады помочь вам и ответить на все ваши вопросы.</p>
                    <p>Для срочных вопросов доступен круглосуточный чат поддержки на сайте.</p>
                `
            },
            {
                id: 'products',
                fileName: 'products.html',
                title: 'Наши продукты',
                // ВСТАВЬТЕ ТОЛЬКО СОДЕРЖИМОЕ ВНУТРИ BODY - БЕЗ <html>, <head>, <body>
                content: `
                    <h1>Наши продукты</h1>
                    <p>Мы разрабатываем инновационные продукты для различных сфер бизнеса:</p>
                    <ul>
                        <li>CRM система для управления клиентами</li>
                        <li>Платформа для электронной коммерции</li>
                        <li>Мобильное приложение для доставки</li>
                        <li>Аналитическая панель для бизнеса</li>
                    </ul>
                    <p>Все продукты проходят тщательное тестирование и оптимизацию перед выпуском.</p>
                    <p>Мы предоставляем техническую поддержку и регулярные обновления для всех наших продуктов.</p>
                `
            }*/
        ];

class EmbeddedSiteSearch {
    constructor(options = {}) {
        // Настройки по умолчанию
        this.config = {
            inputId: 'search-input',
            buttonId: 'search-button', 
            resultsContainerId: 'results-container',
            fileListContainerId: 'file-list-container',
            ...options // Переопределяем переданными опциями
        };
        
        this.pages = sitePages;
        this.init();
    }

    init() {
        this.bindEvents();
        this.showFileList();
    }

    bindEvents() {
        const searchButton = document.getElementById(this.config.buttonId);
        const searchInput = document.getElementById(this.config.inputId);
        
        if (searchButton) {
            searchButton.addEventListener('click', () => this.search());
        }
        
        if (searchInput) {
            searchInput.addEventListener('keypress', (e) => {
                if (e.key === 'Enter') this.search();
            });
        }
    }

    showFileList() {
        const fileListContainer = document.getElementById(this.config.fileListContainerId);
        if (!fileListContainer) return;
        
        const fileList = this.pages.map(page => 
            `<span class="file-item">${page.fileName}</span>`
        ).join('');
        
        fileListContainer.innerHTML = `
            <div class="file-list">
                <h3>📂 Доступные для поиска страницы:</h3>
                ${fileList}
            </div>
        `;
    }

    search() {
        const query = document.getElementById(this.config.inputId).value.trim();
        const resultsContainer = document.getElementById(this.config.resultsContainerId);
        
        if (!query) {
            resultsContainer.innerHTML = '<div style="color: #e74c3c; padding: 20px; text-align: center;">Введите поисковый запрос</div>';
            return;
        }
        
        if (query.length < 2) {
            resultsContainer.innerHTML = '<div style="color: #e74c3c; padding: 20px; text-align: center;">Введите хотя бы 2 символа</div>';
            return;
        }

        const results = this.performSearch(query);
        this.displayResults(results, query);
    }

    performSearch(query) {
        const results = [];
        const lowerQuery = query.toLowerCase();

        this.pages.forEach(page => {
            const text = this.extractTextFromHTML(page.content);
            const matches = this.findMatches(text, lowerQuery);
            
            if (matches.length > 0) {
                const excerpt = this.createExcerpt(text, query, matches[0]);
                results.push({
                    id: page.id,
                    fileName: page.fileName,
                    title: page.title,
                    excerpt: excerpt,
                    matchCount: matches.length,
                    textLength: text.length
                });
            }
        });

        return results.sort((a, b) => b.matchCount - a.matchCount);
    }

    extractTextFromHTML(html) {
        const tempDiv = document.createElement('div');
        tempDiv.innerHTML = html;
        
        // Удаляем скрипты и стили
        const scripts = tempDiv.querySelectorAll('script, style, noscript');
        scripts.forEach(el => el.remove());
        
        // Получаем чистый текст
        let text = tempDiv.textContent || tempDiv.innerText || '';
        text = text.replace(/\s+/g, ' ').trim();
        
        return text;
    }

    findMatches(text, query) {
        const matches = [];
        const lowerText = text.toLowerCase();
        let position = lowerText.indexOf(query);
        
        while (position !== -1) {
            matches.push(position);
            position = lowerText.indexOf(query, position + 1);
        }
        
        return matches;
    }

    createExcerpt(text, query, matchPosition) {
        const start = Math.max(0, matchPosition - 60);
        const end = Math.min(text.length, matchPosition + query.length + 100);
        
        let excerpt = text.substring(start, end);
        
        if (start > 0) excerpt = '...' + excerpt;
        if (end < text.length) excerpt = excerpt + '...';
        
        const regex = new RegExp(this.escapeRegex(query), 'gi');
        return excerpt.replace(regex, match => `<mark>${match}</mark>`);
    }

    escapeRegex(string) {
        return string.replace(/[.*+?^${}()|[\]\\]/g, '\\$&');
    }

    displayResults(results, query) {
        const resultsContainer = document.getElementById(this.config.resultsContainerId);
        
        if (results.length === 0) {
            resultsContainer.innerHTML = `
                <div class="no-results">
                    <h3>😔 Ничего не найдено</h3>
                    <p>По запросу "<strong>${this.escapeHtml(query)}</strong>" не найдено совпадений</p>
                </div>
            `;
            return;
        }
        
        let html = `
            <div class="results-info">
                <strong>Найдено в ${results.length} страницах</strong><br>
                Запрос: "${this.escapeHtml(query)}"
            </div>
        `;
        
        results.forEach(result => {
            const highlightUrl = `${result.fileName}?search=${encodeURIComponent(query)}`;
            html += `
                <div class="result-item">
                    <div class="result-title">
                        <a href="${highlightUrl}" target="_blank">${this.escapeHtml(result.title)}</a>
                    </div>
                    <div class="result-meta">
                        📄 ${result.fileName} | 
                        🔍 Совпадений: ${result.matchCount} | 
                        📏 Текст: ${result.textLength} символов
                    </div>
                    <div class="result-excerpt">${result.excerpt}</div>
                </div>
            `;
        });
        
        resultsContainer.innerHTML = html;
    }

    escapeHtml(text) {
        const div = document.createElement('div');
        div.textContent = text;
        return div.innerHTML;
    }
}

// Инициализация для разных поисковых интерфейсов
document.addEventListener('DOMContentLoaded', () => {
    // Для navb с ID search-input1, search-button1, results-container1
    new EmbeddedSiteSearch({
        inputId: 'search-input1',
        buttonId: 'search-button1', 
        resultsContainerId: 'results-container1',
        fileListContainerId: 'file-list-container1' // если есть
    });
    
    // Для menu с ID search-input2, search-button2, results-container2  
    new EmbeddedSiteSearch({
        inputId: 'search-input',
        buttonId: 'search-button',
        resultsContainerId: 'results-container',
        fileListContainerId: 'file-list-container' // если есть
    });
    
    // Или для интерфейсов со стандартными ID
    new EmbeddedSiteSearch(); // использует настройки по умолчанию
});