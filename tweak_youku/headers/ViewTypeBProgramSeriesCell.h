//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKTableCellWithHorizontalTable.h"

@class ViewTypeBProgramSeriesModel;

@interface ViewTypeBProgramSeriesCell : SKTableCellWithHorizontalTable
{
    ViewTypeBProgramSeriesModel *_model;
}

+ (float)getCellHeight:(id)arg1;
@property(retain, nonatomic) ViewTypeBProgramSeriesModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (float)getTableViewLeftOffset;
- (float)getContentCellHeight;
- (float)getContentCellWidth;
- (void)setData:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
