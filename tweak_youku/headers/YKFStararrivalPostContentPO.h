//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSArray<YKFStararrivalPostAudioPO>, NSArray<YKFStararrivalPostPicPO>, NSArray<YKFStararrivalPostVideoPO>, NSString;

@interface YKFStararrivalPostContentPO : YKFAPIModel
{
    NSArray<YKFStararrivalPostAudioPO> *_audios;
    NSString *_content;
    NSArray<YKFStararrivalPostPicPO> *_pics;
    NSArray<YKFStararrivalPostVideoPO> *_videos;
}

@property(retain, nonatomic) NSArray<YKFStararrivalPostVideoPO> *videos; // @synthesize videos=_videos;
@property(retain, nonatomic) NSArray<YKFStararrivalPostPicPO> *pics; // @synthesize pics=_pics;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSArray<YKFStararrivalPostAudioPO> *audios; // @synthesize audios=_audios;
- (void).cxx_destruct;

@end
