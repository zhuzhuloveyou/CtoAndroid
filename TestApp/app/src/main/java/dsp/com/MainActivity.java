package dsp.com;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        TextView log = findViewById(R.id.Log);
        log.setText(getString());
    }
    static{
        System.loadLibrary("Algorithm");
    }
    public native String getString();
}