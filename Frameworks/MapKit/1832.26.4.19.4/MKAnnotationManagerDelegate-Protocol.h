//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class MKAnnotationManager, NSArray;
@protocol MKAnnotation, MKAnnotationRepresentation;

@protocol MKAnnotationManagerDelegate <NSObject>
- (void)annotationManager:(MKAnnotationManager *)arg1 didDeselectAnnotationRepresentation:(id <MKAnnotationRepresentation>)arg2;
- (void)annotationManager:(MKAnnotationManager *)arg1 didSelectAnnotationRepresentation:(id <MKAnnotationRepresentation>)arg2;
- (id <MKAnnotationRepresentation>)annotationManager:(MKAnnotationManager *)arg1 representationForAnnotation:(id <MKAnnotation>)arg2;
- (void)annotationManager:(MKAnnotationManager *)arg1 didRemoveAnnotationRepresentations:(NSArray *)arg2;
- (void)annotationManager:(MKAnnotationManager *)arg1 didAddAnnotationRepresentations:(NSArray *)arg2;

@optional
- (BOOL)annotationManager:(MKAnnotationManager *)arg1 canSelectAnnotationRepresentation:(id <MKAnnotationRepresentation>)arg2;
- (BOOL)annotationManager:(MKAnnotationManager *)arg1 shouldAnimateDeselectionOfAnnotation:(id <MKAnnotation>)arg2 forSelectionOfAnnotation:(id <MKAnnotation>)arg3;
- (void)annotationManager:(MKAnnotationManager *)arg1 willDeselectAnnotationRepresentation:(id <MKAnnotationRepresentation>)arg2;
@end

