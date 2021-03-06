//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL, UIImage;

@interface SPMZoomingImage : NSObject
{
    UIImage *_image;
    NSString *_caption;
    NSURL *_imgUrl;
    CDUnknownBlockType _asynImage;
}

@property(copy, nonatomic) CDUnknownBlockType asynImage; // @synthesize asynImage=_asynImage;
@property(retain, nonatomic) NSURL *imgUrl; // @synthesize imgUrl=_imgUrl;
@property(retain, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)cancelLoading;

@end

