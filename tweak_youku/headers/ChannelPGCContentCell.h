//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class ChannelPGCContentScrollView, NSMutableArray, UICollectionView, YKTabMenu;

@interface ChannelPGCContentCell : UITableViewCell
{
    ChannelPGCContentScrollView *_scrollView;
    NSMutableArray *_videoArray;
    UICollectionView *_collectionView;
    YKTabMenu *_tabMenu;
}

@property(retain, nonatomic) YKTabMenu *tabMenu; // @synthesize tabMenu=_tabMenu;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSMutableArray *videoArray; // @synthesize videoArray=_videoArray;
@property(retain, nonatomic) ChannelPGCContentScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)setList:(id)arg1 size:(struct CGSize)arg2 index:(long long)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
