//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface ALiTradeEnv : NSObject
{
    NSMutableDictionary *_dicRelease;
    NSMutableDictionary *_dicPreRelease;
    NSMutableDictionary *_dicDaily;
}

+ (id)configServerHost;
+ (id)shopURLWithShopID:(id)arg1;
+ (id)myOrdersURLWithTabCode:(id)arg1 condition:(id)arg2;
+ (id)taobaoHomeURL;
+ (id)cartURL;
+ (id)addCardURL:(id)arg1;
+ (id)miniItemURLWithItemID:(id)arg1;
+ (id)itemURLWithItemType:(long long)arg1 itemID:(id)arg2;
+ (id)itemHostWithItemType:(long long)arg1 viewType:(id)arg2;
+ (id)shopUrlHost;
+ (id)baichuanTradeItemUrlHost;
+ (id)miniTaobaoMobileTradeItemUrlHost;
+ (id)taobaoMobileTradeItemUrlHost;
+ (id)GetInstance;
@property(retain, nonatomic) NSMutableDictionary *dicDaily; // @synthesize dicDaily=_dicDaily;
@property(retain, nonatomic) NSMutableDictionary *dicPreRelease; // @synthesize dicPreRelease=_dicPreRelease;
@property(retain, nonatomic) NSMutableDictionary *dicRelease; // @synthesize dicRelease=_dicRelease;
- (void).cxx_destruct;
- (id)getUrlByKey:(id)arg1;
- (void)loadConfig;
- (id)init;

@end
