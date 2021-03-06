//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@interface YKFashionTopic : NSObject
{
    _Bool _autoPlay;
    NSString *_topicId;
    NSString *_topicTitle;
    NSString *_topicSubTitle;
    NSString *_topicTitleColor;
    NSString *_topicImg;
    NSArray *_videosArray;
    NSDictionary *_videosDict;
    NSArray *_moreImgArray;
}

@property(nonatomic) _Bool autoPlay; // @synthesize autoPlay=_autoPlay;
@property(retain, nonatomic) NSArray *moreImgArray; // @synthesize moreImgArray=_moreImgArray;
@property(retain, nonatomic) NSDictionary *videosDict; // @synthesize videosDict=_videosDict;
@property(retain, nonatomic) NSArray *videosArray; // @synthesize videosArray=_videosArray;
@property(retain, nonatomic) NSString *topicImg; // @synthesize topicImg=_topicImg;
@property(retain, nonatomic) NSString *topicTitleColor; // @synthesize topicTitleColor=_topicTitleColor;
@property(retain, nonatomic) NSString *topicSubTitle; // @synthesize topicSubTitle=_topicSubTitle;
@property(retain, nonatomic) NSString *topicTitle; // @synthesize topicTitle=_topicTitle;
@property(retain, nonatomic) NSString *topicId; // @synthesize topicId=_topicId;
- (void).cxx_destruct;
- (void)setupWithInfo:(id)arg1;

@end

