# Add ome Lorem Ipsum

- Add a button

```HTML
<p>Lorem Ipsum</p>
```

- Add some styling
```CSS
.clear-rating{
	display: block;
}
```
- Add click
```JS
	$('.clear-rating').click(function(){
		$(this).siblings('.input-no-rate').click();
		});
```