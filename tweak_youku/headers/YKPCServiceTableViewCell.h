//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class CALayer, UICollectionView;

@interface YKPCServiceTableViewCell : UITableViewCell
{
    _Bool _showLineView;
    UICollectionView *_serviceCollection;
    CALayer *_lineLayer;
}

@property(retain, nonatomic) CALayer *lineLayer; // @synthesize lineLayer=_lineLayer;
@property(nonatomic) _Bool showLineView; // @synthesize showLineView=_showLineView;
@property(retain, nonatomic) UICollectionView *serviceCollection; // @synthesize serviceCollection=_serviceCollection;
- (void).cxx_destruct;
- (void)reloadData;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

