//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSString;

@interface YKFCommunityArtistRelateVideoPO : YKFAPIModel
{
    float _seconds;
    NSString *_originalVideoId;
    long long _paid;
    long long _postId;
    NSString *_thumburl;
    NSString *_title;
    long long _totalVV;
    NSString *_videoUrl;
    long long _videoid;
}

@property(nonatomic) long long videoid; // @synthesize videoid=_videoid;
@property(retain, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(nonatomic) long long totalVV; // @synthesize totalVV=_totalVV;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *thumburl; // @synthesize thumburl=_thumburl;
@property(nonatomic) float seconds; // @synthesize seconds=_seconds;
@property(nonatomic) long long postId; // @synthesize postId=_postId;
@property(nonatomic) long long paid; // @synthesize paid=_paid;
@property(retain, nonatomic) NSString *originalVideoId; // @synthesize originalVideoId=_originalVideoId;
- (void).cxx_destruct;

@end
