//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBPLBaseConfigManager.h"

@interface TBPLAppConfigManager : TBPLBaseConfigManager
{
}

- (_Bool)isMatchWithPageInfoList:(id)arg1 forUri:(id)arg2 param:(id)arg3;
- (_Bool)config:(id)arg1 shouldSurviveForPageName:(id)arg2 url:(id)arg3;
- (_Bool)config:(id)arg1 shouldTriggerForEvent:(id)arg2;
- (id)findConfigsForEvent:(id)arg1 currentPageName:(id)arg2 currentUrl:(id)arg3;
- (id)generateConfigModelForDict:(id)arg1;
- (id)initWithConfigCenter:(id)arg1;

@end

