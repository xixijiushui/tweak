//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface LSJsonDataCache : NSObject
{
    NSString *_path;
}

@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (id)cachedJson;
- (void)saveToDisk:(id)arg1;
- (_Bool)cacheAvailable;
- (id)initWithPath:(id)arg1;

@end

