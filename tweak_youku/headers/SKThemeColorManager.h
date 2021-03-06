//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString, SKThemeColorModel;

@interface SKThemeColorManager : NSObject
{
    NSString *_searchKeyword;
    NSString *_searchKeywordCorrectedWord;
    SKThemeColorModel *_currentThemeColorModel;
    SKThemeColorModel *_oldCurrentThemeColorModel;
    SKThemeColorModel *_defaultThemeColorModel;
    NSMutableArray *_specialThemeColorModelArray;
}

+ (id)getHexColorWithString:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *specialThemeColorModelArray; // @synthesize specialThemeColorModelArray=_specialThemeColorModelArray;
@property(retain, nonatomic) SKThemeColorModel *defaultThemeColorModel; // @synthesize defaultThemeColorModel=_defaultThemeColorModel;
@property(nonatomic) __weak SKThemeColorModel *oldCurrentThemeColorModel; // @synthesize oldCurrentThemeColorModel=_oldCurrentThemeColorModel;
@property(nonatomic) __weak SKThemeColorModel *currentThemeColorModel; // @synthesize currentThemeColorModel=_currentThemeColorModel;
@property(copy, nonatomic) NSString *searchKeywordCorrectedWord; // @synthesize searchKeywordCorrectedWord=_searchKeywordCorrectedWord;
@property(copy, nonatomic) NSString *searchKeyword; // @synthesize searchKeyword=_searchKeyword;
- (void).cxx_destruct;
- (void)dealloc;
- (void)initDefaultStyle;

@end

