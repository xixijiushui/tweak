//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSArray<YKFStararrivalPostAudioRO>, NSArray<YKFStararrivalPostPicRO>, NSArray<YKFStararrivalPostVideoRO>, NSString;

@interface YKFStararrivalPostContentRO : YKFAPIModel
{
    NSArray<YKFStararrivalPostAudioRO> *_audios;
    NSString *_content;
    NSArray<YKFStararrivalPostPicRO> *_pics;
    NSArray<YKFStararrivalPostVideoRO> *_videos;
}

@property(retain, nonatomic) NSArray<YKFStararrivalPostVideoRO> *videos; // @synthesize videos=_videos;
@property(retain, nonatomic) NSArray<YKFStararrivalPostPicRO> *pics; // @synthesize pics=_pics;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSArray<YKFStararrivalPostAudioRO> *audios; // @synthesize audios=_audios;
- (void).cxx_destruct;

@end

