//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MapKit/MKViewWithHairline.h>

@interface MKPlaceSectionItemView : MKViewWithHairline
{
    BOOL _fullWidthHairline;
}

@property(nonatomic, getter=isHairlineFullWidth) BOOL fullWidthHairline; // @synthesize fullWidthHairline=_fullWidthHairline;
- (void)viewDidMoveToWindow;
- (void)_updateHairlineInsets;
- (void)_mapkit_layoutMarginsDidChange;
- (void)infoCardThemeChanged:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

