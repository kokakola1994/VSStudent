﻿using System.Collections.Generic;
using System.Threading.Tasks;
using Telegram.Bot;
using PecBot.Models.Commands;

namespace PecBot.Models
{
    public static class Bot
    {
        private static TelegramBotClient client;
        private static List<Command> commandsList;
        public static IReadOnlyList<Command> Commands { get => commandsList.AsReadOnly(); }
        public static async Task<TelegramBotClient> Get()
        {
            if (client != null)
            {
                return client;
            }
            commandsList = new List<Command>();
            commandsList.Add(new PecCommand());
            commandsList.Add(new Peccom());
            client = new TelegramBotClient(AppSettings.Key);
            var hook = string.Format(AppSettings.Url, "api/message/update/");
            await client.SetWebhookAsync(hook);
            return client;
         }
    }
}