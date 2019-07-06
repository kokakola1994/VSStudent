using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using Telegram.Bot;
using Telegram.Bot.Types;

namespace PecBot.Models.Commands
{
    public class PecCommand : Command
    {
        public override string Name => "Пец";

        public override async void Execute(Message message, TelegramBotClient client)
        {
            var chatId = message.Chat.Id;
            var messageID = message.MessageId; 
            await client.SendTextMessageAsync(chatId,"Пец",replyToMessageId: messageID);
        }
    }
}