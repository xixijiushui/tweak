//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "DYRUFeedConfigModelProtocol.h"

@class DYRUFeedContentView, DYRUUserModel, NSString;

@interface DYRUFeedCell : UITableViewCell <DYRUFeedConfigModelProtocol>
{
    CDUnknownBlockType _feedCallBack;
    long long _feedStyle;
    DYRUFeedContentView *_feedContentView;
    DYRUUserModel *_user;
}

+ (double)cellHeight:(id)arg1;
@property(retain, nonatomic) DYRUUserModel *user; // @synthesize user=_user;
@property(retain, nonatomic) DYRUFeedContentView *feedContentView; // @synthesize feedContentView=_feedContentView;
@property(nonatomic) long long feedStyle; // @synthesize feedStyle=_feedStyle;
- (void).cxx_destruct;
- (void)refresh;
- (double)cellHeight;
@property(copy, nonatomic) CDUnknownBlockType feedCallBack; // @synthesize feedCallBack=_feedCallBack;
- (void)configUser:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

