//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface TBPLPageInfo : NSObject
{
    NSString *_uri;
    NSArray *_uris;
    id _paramContains;
}

+ (id)pageInfoWithDict:(id)arg1;
@property(copy, nonatomic) id paramContains; // @synthesize paramContains=_paramContains;
@property(copy, nonatomic) NSArray *uris; // @synthesize uris=_uris;
@property(copy, nonatomic) NSString *uri; // @synthesize uri=_uri;
- (void).cxx_destruct;
- (_Bool)isMatchUri:(id)arg1 andParam:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

