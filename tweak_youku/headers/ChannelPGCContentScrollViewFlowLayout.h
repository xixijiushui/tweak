//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewFlowLayout.h"

@interface ChannelPGCContentScrollViewFlowLayout : UICollectionViewFlowLayout
{
    long long _index;
    double _collectionViewWidth;
    double _collectionViewHeight;
    id <ChannelPGCContentScrollViewFlowLayoutDelegate> _delegate;
    long long _dataCount;
}

@property(nonatomic) long long dataCount; // @synthesize dataCount=_dataCount;
@property(nonatomic) __weak id <ChannelPGCContentScrollViewFlowLayoutDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;

@end
