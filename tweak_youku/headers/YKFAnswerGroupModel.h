//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAttributedString, NSString, YYTextLayout;

@interface YKFAnswerGroupModel : NSObject
{
    NSString *_replyString;
    NSAttributedString *_replyContent;
    YYTextLayout *_replyContentLayout;
    long long _replyAgreedCount;
}

@property(nonatomic) long long replyAgreedCount; // @synthesize replyAgreedCount=_replyAgreedCount;
@property(retain, nonatomic) YYTextLayout *replyContentLayout; // @synthesize replyContentLayout=_replyContentLayout;
@property(retain, nonatomic) NSAttributedString *replyContent; // @synthesize replyContent=_replyContent;
@property(retain, nonatomic) NSString *replyString; // @synthesize replyString=_replyString;
- (void).cxx_destruct;

@end
