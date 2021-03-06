//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SKSelectViewDelegate.h"

@class NSMutableArray, NSString;

@interface SKFilterView : UIView <SKSelectViewDelegate>
{
    CDUnknownBlockType _handler;
    NSMutableArray *_selectViews;
}

@property(retain, nonatomic) NSMutableArray *selectViews; // @synthesize selectViews=_selectViews;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
- (void).cxx_destruct;
- (void)setSelectionIndex:(id)arg1;
- (void)selectionChanged:(id)arg1;
- (void)selectView:(id)arg1 didSelectAtIndex:(long long)arg2;
- (id)initWithData:(id)arg1 deaultIndex:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

