//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKVIPItemModel.h"

@class NSString, VIPCMSAction, YKVIPShortVideoUser, YKVIPTag;

@interface YKVIPShortVideoModel : YKVIPItemModel
{
    _Bool _isNum;
    _Bool _isLike;
    NSString *_playCount;
    NSString *_seconds;
    NSString *_comments;
    NSString *_likes;
    long long _likeNum;
    NSString *_playUrl;
    YKVIPTag *_currentTag;
    YKVIPShortVideoUser *_user;
    VIPCMSAction *_videoAction;
    long long _viewType;
    NSString *_videoType;
    NSString *_videoSize;
    YKVIPShortVideoModel *_videoModel;
}

@property(retain, nonatomic) YKVIPShortVideoModel *videoModel; // @synthesize videoModel=_videoModel;
@property(retain, nonatomic) NSString *videoSize; // @synthesize videoSize=_videoSize;
@property(retain, nonatomic) NSString *videoType; // @synthesize videoType=_videoType;
@property(nonatomic) long long viewType; // @synthesize viewType=_viewType;
@property(retain, nonatomic) VIPCMSAction *videoAction; // @synthesize videoAction=_videoAction;
@property(retain, nonatomic) YKVIPShortVideoUser *user; // @synthesize user=_user;
@property(retain, nonatomic) YKVIPTag *currentTag; // @synthesize currentTag=_currentTag;
@property(retain, nonatomic) NSString *playUrl; // @synthesize playUrl=_playUrl;
@property(nonatomic) _Bool isLike; // @synthesize isLike=_isLike;
@property(nonatomic) _Bool isNum; // @synthesize isNum=_isNum;
@property(nonatomic) long long likeNum; // @synthesize likeNum=_likeNum;
@property(retain, nonatomic) NSString *likes; // @synthesize likes=_likes;
@property(retain, nonatomic) NSString *comments; // @synthesize comments=_comments;
@property(retain, nonatomic) NSString *seconds; // @synthesize seconds=_seconds;
@property(retain, nonatomic) NSString *playCount; // @synthesize playCount=_playCount;
- (void).cxx_destruct;
- (_Bool)isPureInt:(id)arg1;
- (id)initItemModelWithDictionary:(id)arg1;

@end

