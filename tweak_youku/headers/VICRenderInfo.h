//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VICModel.h"

@class NSString;

@interface VICRenderInfo : VICModel
{
    NSString *_mode;
    NSString *_bundleUrl;
    NSString *_url;
}

+ (id)modelWithDictionary:(id)arg1;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *bundleUrl; // @synthesize bundleUrl=_bundleUrl;
@property(retain, nonatomic) NSString *mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (unsigned long long)renderMode;

@end
