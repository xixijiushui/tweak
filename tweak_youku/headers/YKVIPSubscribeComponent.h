//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKVIPBaseComponent.h"

@class YKVIPSubscribeCell;

@interface YKVIPSubscribeComponent : YKVIPBaseComponent
{
    YKVIPSubscribeCell *_sbCell;
}

- (void).cxx_destruct;
- (void)exposeInCell:(id)arg1;
- (id)exposeArrayForComponent:(id)arg1;
- (void)tableView:(id)arg1 didEndDisplayingComponentAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndScrollComponentAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)heightForRowAtIndexPath:(id)arg1;
- (long long)numberOfRowsInComponent;

@end

