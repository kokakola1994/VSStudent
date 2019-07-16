using Telegram.Bot;
using Telegram.Bot.Types;

namespace PecBot.Models.Commands
{
    public class Peccom : Command
    {
        public override string Name => "sanya";

        public override async void Execute(Message message, TelegramBotClient client)
        {
            var chatId = message.Chat.Id;
            var messageID = message.MessageId;
            await client.SendTextMessageAsync(chatId,"Жирний",replyToMessageId:messageID);
        }
    }
}