//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CMSComponent.h"

@class NSArray;

@interface CMSComponentModular : CMSComponent
{
    NSArray *_models;
}

@property(retain, nonatomic) NSArray *models; // @synthesize models=_models;
- (void).cxx_destruct;
- (id)componentCard:(id)arg1 cardVideoArrayForComponentContentAtIndex:(long long)arg2;
- (void)componentCard:(id)arg1 reuseView:(id)arg2 forComponentContentAtIndex:(long long)arg3;
- (id)componentCard:(id)arg1 viewForComponentContentAtIndex:(long long)arg2;
- (id)componentCard:(id)arg1 reuseIdentifierForComponentContentAtIndex:(long long)arg2;
- (double)componentCard:(id)arg1 viewHeightWithWidth:(double)arg2 forComponentContentAtIndex:(long long)arg3;
- (_Bool)componentCard:(id)arg1 supportCollectionViewForComponentContentAtIndex:(long long)arg2;
- (long long)componentCard:(id)arg1 rowCountForComponentContentInTableView:(id)arg2;
- (void)didFinishInitConfigurationInComponentCard:(id)arg1;

@end
