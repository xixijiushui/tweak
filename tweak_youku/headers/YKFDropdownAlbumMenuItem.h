//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIImageView, UILabel;

@interface YKFDropdownAlbumMenuItem : UIView
{
    UIImageView *_photoImageView;
    UILabel *_titleLabel;
    UILabel *_countLabel;
    UIView *_seperator;
    NSString *_representedAssetCollectionIdentifier;
}

@property(copy, nonatomic) NSString *representedAssetCollectionIdentifier; // @synthesize representedAssetCollectionIdentifier=_representedAssetCollectionIdentifier;
@property(nonatomic) __weak UIView *seperator; // @synthesize seperator=_seperator;
@property(nonatomic) __weak UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIImageView *photoImageView; // @synthesize photoImageView=_photoImageView;
- (void).cxx_destruct;
- (void)awakeFromNib;

@end

