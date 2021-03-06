//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSArray, NSMutableArray;

@interface YKCMSPersonalCenterListSelectGroupCell : UITableViewCell
{
    id <YKCMSPersonalCenterListSelectDelegate> _delegate;
    NSMutableArray *_viewArray;
    NSArray *_dataArray;
    long long _rowIndex;
}

@property(nonatomic) long long rowIndex; // @synthesize rowIndex=_rowIndex;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) NSMutableArray *viewArray; // @synthesize viewArray=_viewArray;
@property(nonatomic) __weak id <YKCMSPersonalCenterListSelectDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)itemViewByTitle:(id)arg1;
- (void)setupCell:(id)arg1 size:(struct CGSize)arg2 rowIndex:(long long)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

