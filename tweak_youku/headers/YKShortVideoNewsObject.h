//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class YKShortVideoNewsArticleModel, YKShortVideoNewsJumpH5Model, YKShortVideoNewsJumpNativeModel, YKShortVideoNewsLongVideoModel, YKShortVideoNewsVoteModel;

@interface YKShortVideoNewsObject : NSObject
{
    YKShortVideoNewsArticleModel *_article;
    YKShortVideoNewsVoteModel *_vote;
    YKShortVideoNewsLongVideoModel *_video;
    YKShortVideoNewsJumpH5Model *_jumpH5;
    YKShortVideoNewsJumpNativeModel *_jumpNative;
}

@property(retain, nonatomic) YKShortVideoNewsJumpNativeModel *jumpNative; // @synthesize jumpNative=_jumpNative;
@property(retain, nonatomic) YKShortVideoNewsJumpH5Model *jumpH5; // @synthesize jumpH5=_jumpH5;
@property(retain, nonatomic) YKShortVideoNewsLongVideoModel *video; // @synthesize video=_video;
@property(retain, nonatomic) YKShortVideoNewsVoteModel *vote; // @synthesize vote=_vote;
@property(retain, nonatomic) YKShortVideoNewsArticleModel *article; // @synthesize article=_article;
- (void).cxx_destruct;

@end

