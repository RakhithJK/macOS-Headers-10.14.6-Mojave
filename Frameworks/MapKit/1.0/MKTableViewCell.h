//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@interface MKTableViewCell : UITableViewCell
{
    BOOL __mapkit_separatorStyleOverrideEnabled;
    BOOL __mapkit_forceSeparatorFrameToCGRectZero;
    long long __mapkit_separatorStyleOverride;
}

@property(nonatomic) long long _mapkit_separatorStyleOverride; // @synthesize _mapkit_separatorStyleOverride=__mapkit_separatorStyleOverride;
@property(nonatomic) BOOL _mapkit_forceSeparatorFrameToCGRectZero; // @synthesize _mapkit_forceSeparatorFrameToCGRectZero=__mapkit_forceSeparatorFrameToCGRectZero;
- (void)setSemanticContentAttribute:(long long)arg1;
- (struct CGRect)_separatorFrame;
- (void)setSeparatorStyle:(long long)arg1;
- (void)_mapkit_disableSeparatorStyleOverride;

@end

