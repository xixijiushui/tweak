//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface YCSVideoObject : NSObject
{
    int _width;
    int _height;
    NSString *_vid;
    NSString *_videoPicUrl;
    NSData *_coverImage;
    NSString *_videoUrl;
    NSString *_title;
    NSString *_content;
    long long _durationFromShare;
}

+ (id)videoObject;
@property(nonatomic) long long durationFromShare; // @synthesize durationFromShare=_durationFromShare;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) int height; // @synthesize height=_height;
@property(nonatomic) int width; // @synthesize width=_width;
@property(retain, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(retain, nonatomic) NSData *coverImage; // @synthesize coverImage=_coverImage;
@property(retain, nonatomic) NSString *videoPicUrl; // @synthesize videoPicUrl=_videoPicUrl;
@property(retain, nonatomic) NSString *vid; // @synthesize vid=_vid;
- (void).cxx_destruct;
- (long long)duration;

@end
