//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ZPDShareInfo : NSObject
{
    int _platformId;
    NSString *_url;
    NSString *_thumbnailUrl;
    NSString *_titleText;
    NSString *_descText;
    NSString *_contentId;
}

@property(nonatomic) int platformId; // @synthesize platformId=_platformId;
@property(copy, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
@property(copy, nonatomic) NSString *descText; // @synthesize descText=_descText;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(copy, nonatomic) NSString *thumbnailUrl; // @synthesize thumbnailUrl=_thumbnailUrl;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;

@end

