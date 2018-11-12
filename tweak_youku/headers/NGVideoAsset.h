//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSURL, UIImage;

@interface NGVideoAsset : NSObject
{
    long long _assetType;
    NSURL *_URL;
    NSDate *_createDate;
    double _duration;
    UIImage *_thumbnail;
}

@property(retain, nonatomic) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) NSDate *createDate; // @synthesize createDate=_createDate;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) long long assetType; // @synthesize assetType=_assetType;
- (void).cxx_destruct;
- (id)requestDataFromOffset:(long long)arg1 length:(long long)arg2;

@end

