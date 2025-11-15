
//Метрика
(function (m, e, t, r, i, k, a) {
  m[i] = m[i] || function () { (m[i].a = m[i].a || []).push(arguments) };
  m[i].l = 1 * new Date();
  for (var j = 0; j < document.scripts.length; j++) { if (document.scripts[j].src === r) { return; } }
  k = e.createElement(t), a = e.getElementsByTagName(t)[0], k.async = 1, k.src = r, a.parentNode.insertBefore(k, a)
})
  (window, document, "script", "https://mc.yandex.ru/metrika/tag.js", "ym");

ym(97458522, "init", {
  clickmap: true,
  trackLinks: true,
  accurateTrackBounce: true,
  webvisor: true
});

// Смена тема
function setTheme(themeName) {
  localStorage.setItem('theme', themeName);
  document.documentElement.className = themeName;
}

// function to toggle between light and dark theme
function toggleTheme() {
  if (localStorage.getItem('theme') === 'theme-dark') {
    setTheme('theme-light');
  } else {
    setTheme('theme-dark');
  }
}

// Immediately invoked function to set the theme on initial load
(function () {
  if (localStorage.getItem('theme') === 'theme-dark') {
    setTheme('theme-dark');
    document.getElementById('slider').checked = false;
  } else {
    setTheme('theme-light');
    document.getElementById('slider').checked = true;
  }
})();
// время/дата
        function updateWidget() {
            const now = new Date();
            
            // Форматирование времени
            const time = now.toLocaleTimeString('ru-RU');
            
            // Форматирование даты
            const date = now.toLocaleDateString('ru-RU', {
                day: 'numeric',
                month: 'long',
                year: 'numeric'
            });
            const datek = now.toLocaleDateString('ru-RU', {
                day: 'numeric',
                month: 'numeric',
                year: 'numeric'
            });            
            
            // Расчет номера недели
            const startOfYear = new Date(now.getFullYear(), 0, 1);
            const weekNumber = Math.ceil((((now - startOfYear) / 86400000) + startOfYear.getDay() + 1) / 7);
            
            // Обновление DOM
            document.getElementById('time').textContent = time;
            document.getElementById('date').textContent = date;
            document.getElementById('datek').textContent = datek;
            document.getElementById('week').textContent = `${weekNumber-36}  учебная неделя`;
            document.getElementById('weekk').textContent = `${weekNumber-36}  уч. неделя`;
        }

        // Обновление каждую секунду
        setInterval(updateWidget, 1000);
        

//меню
 function openMenu() {
      document.getElementById("menu").style.display = "block";
      document.getElementById("navb").style.display = "none";
      document.getElementById("search-button").style.display = "none";
    }

    function closeMenu() {
      document.getElementById("menu").style.display = "none";
      document.getElementById("navb").style.display = "block";
      document.getElementById("search-button").style.display = "none";

    }

    // Закрытие при клике вне окна
    window.onclick = function (event) {
      const modal = document.getElementById("menu");
      if (event.target == modal) {
        closeMenu();
      }
    }