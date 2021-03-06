//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIColor, YYTextBorder;

@interface LFRoomChatParser : NSObject
{
    YYTextBorder *_highlightBorder;
    UIColor *_highlightColor;
    UIColor *_nameColor;
    UIColor *_defaultColor;
    UIColor *_systemColor;
    UIColor *_specialColor;
    UIColor *_alphaColor;
    double _lineSpacing;
    double _fontSize;
}

+ (id)roomDanmakuParser;
+ (id)roomChatParser;
- (void).cxx_destruct;
- (void)_enumerateRegexMatchesWithString:(id)arg1 regex:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)_shortPrice:(long long)arg1;
- (id)_userLevelWithLevel:(long long)arg1;
- (id)_medalAttributedStringWithMedals:(id)arg1 rooid:(id)arg2;
- (id)emotionWithExDic;
- (id)emotionDic;
- (id)_attachmentRedEnvelopeWithSize:(struct CGSize)arg1;
- (void)_attachmentEmotionWithAttributedString:(id)arg1;
- (id)_attachmentWithFontSize:(double)arg1 image:(id)arg2 indentation:(_Bool)arg3 magnify:(_Bool)arg4;
- (id)_attachmentWithFontSize:(double)arg1 imageURL:(id)arg2;
- (id)_textWithMedals:(_Bool)arg1 name:(id)arg2 content:(id)arg3 contentHighlight:(id)arg4 contentIsSystemColor:(unsigned long long)arg5 msg:(id)arg6 alphaText:(_Bool)arg7;
- (id)parseWithRoomChatMessage:(id)arg1;
- (id)danmakuParseWithRoomChatMessage:(id)arg1;

@end

