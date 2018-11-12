//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "OPDataSourceProtocol.h"

@class NSMutableDictionary, NSString, OPManagerFactory;

@interface OPDataSource : NSObject <OPDataSourceProtocol>
{
    OPManagerFactory *_managerFactory;
    NSMutableDictionary *_cacheData;
}

@property(retain, nonatomic) NSMutableDictionary *cacheData; // @synthesize cacheData=_cacheData;
@property(nonatomic) __weak OPManagerFactory *managerFactory; // @synthesize managerFactory=_managerFactory;
- (void).cxx_destruct;
- (id)dataForKey:(id)arg1;
- (void)setData:(id)arg1 forKey:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

