//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKMemberCell.h"

#import "YKPayRightsViewDelegate.h"

@class NSString, YKPayRightsView;

@interface YKNewMemberCellPrivilege : YKMemberCell <YKPayRightsViewDelegate>
{
    YKPayRightsView *_rightsView;
}

@property(retain, nonatomic) YKPayRightsView *rightsView; // @synthesize rightsView=_rightsView;
- (void).cxx_destruct;
- (void)rightViewTapedWithModel:(id)arg1;
- (void)layoutSubviews;
- (void)layoutSelf;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

