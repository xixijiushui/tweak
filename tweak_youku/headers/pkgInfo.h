//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface pkgInfo : NSObject
{
    long long _pkgId;
    NSString *_name;
    NSString *_tips;
    NSString *_buyLink;
}

@property(retain) NSString *buyLink; // @synthesize buyLink=_buyLink;
@property(retain) NSString *tips; // @synthesize tips=_tips;
@property(retain) NSString *name; // @synthesize name=_name;
@property long long pkgId; // @synthesize pkgId=_pkgId;
- (void).cxx_destruct;

@end
