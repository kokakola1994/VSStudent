using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;

namespace PecBot.Models
{
    public static class AppSettings
    {
        public static string Url { get; set; } = "https://telegrambotapp.azurewebsites.net:443/{0}";
        public static string Name { get; set; } = "PecBot";
        public static string Key { get; set; } = "648260178:AAGFsgVLD0o7GNbuKf-MYRf5KzgN0NokAR0";
    }
}