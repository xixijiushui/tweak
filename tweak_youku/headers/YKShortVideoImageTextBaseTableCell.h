//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel, UIView;

@interface YKShortVideoImageTextBaseTableCell : UITableViewCell
{
    UILabel *_titleLable;
    UILabel *_userName;
    UIImageView *_commentImageView;
    UILabel *_commentLable;
    UIView *_linView;
    UIImageView *_bigImage;
    UIImageView *_smallImage;
    UIImageView *_Image1;
    UIImageView *_Image2;
    UIImageView *_Image3;
}

@property(retain, nonatomic) UIImageView *Image3; // @synthesize Image3=_Image3;
@property(retain, nonatomic) UIImageView *Image2; // @synthesize Image2=_Image2;
@property(retain, nonatomic) UIImageView *Image1; // @synthesize Image1=_Image1;
@property(retain, nonatomic) UIImageView *smallImage; // @synthesize smallImage=_smallImage;
@property(retain, nonatomic) UIImageView *bigImage; // @synthesize bigImage=_bigImage;
@property(retain, nonatomic) UIView *linView; // @synthesize linView=_linView;
@property(retain, nonatomic) UILabel *commentLable; // @synthesize commentLable=_commentLable;
@property(retain, nonatomic) UIImageView *commentImageView; // @synthesize commentImageView=_commentImageView;
@property(retain, nonatomic) UILabel *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) UILabel *titleLable; // @synthesize titleLable=_titleLable;
- (void).cxx_destruct;
- (void)setYKShorVideoImageTextItem:(id)arg1;
- (void)setUpUI;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
