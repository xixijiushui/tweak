//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class MPMultiSelectionView, NSString;

@protocol MultiSelectionDelegate
- (void)disappear:(MPMultiSelectionView *)arg1 selection:(long long)arg2;
- (NSString *)selectionView:(MPMultiSelectionView *)arg1 selectionAtIndex:(long long)arg2;
- (long long)selectionCount:(MPMultiSelectionView *)arg1;
- (long long)defaultSelection:(MPMultiSelectionView *)arg1;
@end

