//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSString;

@interface YKFCommunityPostVideoPO : YKFAPIModel
{
    long long _height;
    long long _type;
    long long _videoLength;
    NSString *_videoPicUrl;
    NSString *_videoUrl;
    long long _width;
}

@property(nonatomic) long long width; // @synthesize width=_width;
@property(retain, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(retain, nonatomic) NSString *videoPicUrl; // @synthesize videoPicUrl=_videoPicUrl;
@property(nonatomic) long long videoLength; // @synthesize videoLength=_videoLength;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long height; // @synthesize height=_height;
- (void).cxx_destruct;

@end

