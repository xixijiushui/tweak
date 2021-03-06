//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CMSComponent.h"

#import "ChildAsNavCellDelegate.h"

@class ChildBgColor, NSArray, NSString;

@interface CMSComponentChildAtmosphereNav : CMSComponent <ChildAsNavCellDelegate>
{
    NSArray *_items;
    NSString *_bgImage;
    ChildBgColor *_bgColor;
}

@property(retain, nonatomic) ChildBgColor *bgColor; // @synthesize bgColor=_bgColor;
@property(retain, nonatomic) NSString *bgImage; // @synthesize bgImage=_bgImage;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (id)componentCard:(id)arg1 cardVideoArrayForComponentContentAtIndex:(long long)arg2;
- (void)channelCardCell:(id)arg1 didSelecteChannelItem:(id)arg2;
- (id)componentCard:(id)arg1 cellIdentifierForComponentContentAtIndex:(long long)arg2;
- (Class)componentCard:(id)arg1 cellClassForComponentContentAtIndex:(long long)arg2;
- (void)componentCard:(id)arg1 reuseCell:(id)arg2 forComponentContentAtIndex:(long long)arg3;
- (double)componentCard:(id)arg1 rowHeightForComponentContentAtIndex:(long long)arg2;
- (long long)componentCard:(id)arg1 rowCountForComponentContentInTableView:(id)arg2;
- (void)didFinishInitConfigurationInComponentCard:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

