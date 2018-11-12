//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ALMBaseViewModel.h"

@class NSString;

@interface APPPostVideoViewModel : ALMBaseViewModel
{
    _Bool _isPlayFun;
    _Bool _isFandomGroupPost;
    float _duration;
    int _orientation;
    long long _postId;
    long long _fandomId;
    NSString *_coverImageUrl;
    NSString *_videoURL;
    long long _videoId;
    NSString *_videoTitle;
    NSString *_userNickName;
    NSString *_userAvatarUrl;
    NSString *_sourceLinkUrl;
    long long _sourceType;
    long long _gmtCreate;
    long long _playCount;
    long long _videoType;
    long long _from;
    long long _playId;
    struct CGSize _contentSize;
}

@property(nonatomic) long long playId; // @synthesize playId=_playId;
@property(nonatomic) long long from; // @synthesize from=_from;
@property(nonatomic) long long videoType; // @synthesize videoType=_videoType;
@property(nonatomic) _Bool isFandomGroupPost; // @synthesize isFandomGroupPost=_isFandomGroupPost;
@property(nonatomic) long long playCount; // @synthesize playCount=_playCount;
@property(nonatomic) long long gmtCreate; // @synthesize gmtCreate=_gmtCreate;
@property(nonatomic) int orientation; // @synthesize orientation=_orientation;
@property(nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
@property(copy, nonatomic) NSString *sourceLinkUrl; // @synthesize sourceLinkUrl=_sourceLinkUrl;
@property(copy, nonatomic) NSString *userAvatarUrl; // @synthesize userAvatarUrl=_userAvatarUrl;
@property(copy, nonatomic) NSString *userNickName; // @synthesize userNickName=_userNickName;
@property(copy, nonatomic) NSString *videoTitle; // @synthesize videoTitle=_videoTitle;
@property(nonatomic) long long videoId; // @synthesize videoId=_videoId;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) _Bool isPlayFun; // @synthesize isPlayFun=_isPlayFun;
@property(nonatomic) float duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *videoURL; // @synthesize videoURL=_videoURL;
@property(retain, nonatomic) NSString *coverImageUrl; // @synthesize coverImageUrl=_coverImageUrl;
@property(nonatomic) long long fandomId; // @synthesize fandomId=_fandomId;
@property(nonatomic) long long postId; // @synthesize postId=_postId;
- (void).cxx_destruct;
- (void)didFinishPlayTask;
- (void)requestPlayResourceWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (_Bool)needSeparator;
- (id)initWithDataModel:(id)arg1 andPostModel:(id)arg2;
- (id)initWithRecommendVideoPO:(id)arg1;
- (id)initWithDataModel:(id)arg1;

@end

