//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotosUICore/PXMutableLayoutEngine-Protocol.h>

@protocol PXSectionedLayoutDataSourceChangeDetails, PXSectionedLayoutEngineDataSourceSnapshot, PXSectionedLayoutItem;

@protocol PXMutableSectionedLayoutEngine <PXMutableLayoutEngine>
@property(nonatomic) struct CGSize seedSize;
@property(retain, nonatomic) id <PXSectionedLayoutItem> seedItem;
- (void)setDataSourceSnapshot:(id <PXSectionedLayoutEngineDataSourceSnapshot>)arg1 withChangeDetails:(id <PXSectionedLayoutDataSourceChangeDetails>)arg2;
@end
