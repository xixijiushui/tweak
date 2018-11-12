//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

@class ASCellNode, ASCollectionElement, UICollectionViewLayoutAttributes;

@interface _ASCollectionReusableView : UICollectionReusableView
{
    ASCollectionElement *_element;
    UICollectionViewLayoutAttributes *_layoutAttributes;
}

@property(retain, nonatomic) UICollectionViewLayoutAttributes *layoutAttributes; // @synthesize layoutAttributes=_layoutAttributes;
@property(retain, nonatomic) ASCollectionElement *element; // @synthesize element=_element;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)applyLayoutAttributes:(id)arg1;
- (void)prepareForReuse;
@property(readonly, nonatomic) ASCellNode *node;

@end

