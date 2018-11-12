//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSString;

@interface AliBatonOrange : NSObject
{
    _Bool _cover;
    _Bool _hasUpdated;
    NSString *_name;
    NSString *_notiName;
    CDUnknownBlockType _changedBlock;
    NSDictionary *_orangeConfig;
    NSMutableDictionary *_mockConfig;
}

+ (void)setUTEnabled:(_Bool)arg1;
@property(nonatomic) _Bool hasUpdated; // @synthesize hasUpdated=_hasUpdated;
@property(nonatomic) _Bool cover; // @synthesize cover=_cover;
@property(copy, nonatomic) NSMutableDictionary *mockConfig; // @synthesize mockConfig=_mockConfig;
@property(copy, nonatomic) NSDictionary *orangeConfig; // @synthesize orangeConfig=_orangeConfig;
@property(copy, nonatomic) CDUnknownBlockType changedBlock; // @synthesize changedBlock=_changedBlock;
@property(copy, nonatomic) NSString *notiName; // @synthesize notiName=_notiName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)orangeStatusChanged:(id)arg1;
- (void)mockConfig:(id)arg1;
- (void)startUseConfig;
- (void)configEffect;
- (void)setChangedObserve:(CDUnknownBlockType)arg1;
- (id)initWithOrangeName:(id)arg1;
- (void)dealloc;

@end
