//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YKFHorzScrollEntryViewItemVM.h"

@class NSString;

@interface YKFHorzScrollEntryViewItemVM : NSObject <YKFHorzScrollEntryViewItemVM>
{
    NSString *_name;
    NSString *_iconURL;
    NSString *_iconImageName;
    NSString *_markIconURL;
    CDUnknownBlockType _itemDidClicked;
}

@property(copy, nonatomic) CDUnknownBlockType itemDidClicked; // @synthesize itemDidClicked=_itemDidClicked;
@property(copy, nonatomic, getter=ykf_markIconURL) NSString *markIconURL; // @synthesize markIconURL=_markIconURL;
@property(copy, nonatomic, getter=ykf_iconImageName) NSString *iconImageName; // @synthesize iconImageName=_iconImageName;
@property(copy, nonatomic, getter=ykf_iconURL) NSString *iconURL; // @synthesize iconURL=_iconURL;
@property(copy, nonatomic, getter=ykf_name) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)ykf_entryItemDidClicked;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

