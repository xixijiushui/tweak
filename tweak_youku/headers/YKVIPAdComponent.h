//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKVIPBaseComponent.h"

@class YKVIPAdCell;

@interface YKVIPAdComponent : YKVIPBaseComponent
{
    _Bool _displaying;
    YKVIPAdCell *_adCell;
}

@property(retain, nonatomic) YKVIPAdCell *adCell; // @synthesize adCell=_adCell;
@property(nonatomic) _Bool displaying; // @synthesize displaying=_displaying;
- (void).cxx_destruct;
- (id)exposeArrayForComponent:(id)arg1;
- (void)tableView:(id)arg1 willDisplayComponentAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)heightForRowAtIndexPath:(id)arg1;
- (long long)numberOfRowsInComponent;

@end

